#include<stdio.h>
#include<stdlib.h>
int input;
int digit;
int digits[] = {0, 0, 0, 0, 0};
char units[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char tens[][20] = {"ten", "Eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "    nineteen"};
char digit2[][15] = {"none", "none", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
void numberDivider()
{
for(int i=4; i>=1; i--)
    {
        digit = input%10;
        input=(input-digit)/10;
	digits[i] = digit;
    }
};
int main()
{

printf("Please enter a four digit number:");
scanf("%d", &input);
numberDivider();
printf("%sthousand ", units[digits[1]]);
if(digits[2]!=0)printf("%shundred ",units[digits[2]] );
if(digits[3]==1)
{
printf("%s ", tens[digits[4]]);
}else if(digits[3]!=1)
{
if(digits[3]!=0)printf("%s", digit2[digits[3]]);
if(digits[4]!=0)printf("%s", units[digits[4]]);
};
return 0;
};
