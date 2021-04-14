#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
char writtenNumbers[][6] ={"zero", "one", "two","three","four","five","six","seven","eight","nine"}; 
char numberSize[][15] = {"thousand", "hundred",  "ten", "eleven", "twelve", "thirteen", "teen", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "ninety",};
int number[] = {};

printf("Please enter a four digit number and watch the magic happen!:");
scanf("%d %d %d %d", &number[1], &number[2], &number[3], &number[4] );
int i;
int j;

for(i = 0; i<5; i++);
{
for(j = 0; j!=number[i]-1; i++)
{
if(j==number[i])
{
printf("%d", j);
if(number[1]==number[i])
{
printf(" thousand");
}
}
}
};		
return 0;
};


