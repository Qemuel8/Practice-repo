#include<stdio.h>
#include<stdlib.h>


int main()
{

int number;
printf("Please enter a four digit number:");
scanf("%d", &number);
int number1000 = number%10000%10000;
int number100 = number%1000%1000;
int number10 = number%100%1000;
int number1 = number%10%10;
int numbers[] = {number1000, number100, number10, number1};

for(int z = 0; z<5; z++)
{
	printf(" %d ", numbers[z]);


}
return 0;
}
