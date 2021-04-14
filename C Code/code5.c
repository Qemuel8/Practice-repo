#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 int maxValue=5;
 srand(time(NULL));
 int randomNumber = rand() % maxValue + 1; 
 printf("Guess a number between 0 - %d: \n", maxValue);
 int guess;
 scanf("%d", &guess);
 if(randomNumber == guess)
{
	printf("Your guess was correct!\n");

}else
{
	printf("Your guess was wrong! Try again.\n");
}





return 0;
}
