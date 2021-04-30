//simple betting game
//jack queen ing - computer shuffles these cards
//player has to guess position of queen
//if he wins he takes 3*bet
//if he looses he looses tthe bet amount
//player has $100 initially 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash = 100;
void Play(int bet)
{
	char *c = malloc(3*sizeof(char));
	c[0] = 'J'; c[1] = [Q]; c[2] = [K];
	printf("Shuffling...");
	srand(time(NULL));
	int i;
	for(i = 0;i<5;i++)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		int temp = c[x];
		c[x] = c[y];
		c[y] = temp; //swaps characters at position x and y
		
		
	}
	int playerGuess;
	printf("Whats the position of queen - 1,2 or 3?");
	scanf("%d", &playerGuess);
	if(c[playerGuess - 1] == 'Q')
	{
		cash += 3*bet;
		printf("You win ! Result = %c %c %c Totl cash = %d", c[0], c[1], c[2], cash);
	}else
	{
	cash -= bet;
	printf("You Loose ! Result = %c %c %c Total cash = %d \n", c[0], c[1],c[2],cash);	
	}

}




int main()
{
int bet;
printf("Welcome to the Virtual Casino\n");
printf("Total cash = $%d\n", cash);
while(cash>0)
{
	printf("Whats your bet ? $");
	scanf("%d", &bet);
	if(bet == 0 || bet > cash) break;
	Play(bet);
	
	
}




}
