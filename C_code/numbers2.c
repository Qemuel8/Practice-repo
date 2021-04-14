#include<stdio.h>
#include<stdlib.h>

int userInput;
int input[] = {0, 0, 0, 0, 0};
int digits1;
int digits2;
int digits3;
int digits4;

char numbers[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char tens[][20] = {"ten", "Eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char digit2[][15] = {"none", "none", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

void digit1F()
{
	digits1 = userInput%10;
	input[4] = digits1;
};
void digit2F()
{	digits2 = userInput%100;
	input[3] = digits2/10; 
};
void digit3F()
{
	digits3 = userInput%1000;
	input[2] = digits3/100;
	
};

void digit4F()
{
	input[1] = digits4 = userInput/1000;
};


void firstDecimal()
{	
	if(input[1] == 0) return;
	printf("%sthousand ", numbers[input[1]]);	
};
void secondDecimal()
{
	if(input[1] == 0 && input[2] == 0) return;
	printf("%shundred ", numbers[input[2]]);	
};
void thirdDecimal()
{
	if(input[1] == 0 && input[2] == 0 && input[3] == 0) return;
	if(input[3] == 1 && input[4] == 0)
		{
			 printf("%s", tens[input[3]]); return;
 		}
	else if(input[3]==1 && input[4]>0)
		{
			printf("%s", tens[input[4]]); return;
 		};
 	if(input[3]>1) printf("%s", digit2[input[3]]);
};
void fourthDecimal()
{

	if(input[3] == 1 && input[4] == 0) return;
	if(input[3]==1 && input[4]>0) return;
	printf("%s", numbers[input[4]]);
};




int main()
{
printf("Please enter a number");
scanf("%d", &userInput);
digit1F();
digit2F();
digit3F();
digit4F();
firstDecimal();
secondDecimal();
thirdDecimal();
fourthDecimal();
	return 0;
}
