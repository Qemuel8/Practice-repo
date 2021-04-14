#include<stdio.h>
#include<stdlib.h>
int array[][5]={{3,4,5,6},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
int num1 = 0;
int num2 = 0;
void arrayMultiplier()
{
	
	if(num2<4 && num1<4)
	{
		array[num1+1][num2] = array[num1][num2] * array[num1][num2];
		printf("%d  ", array[num1+1][num2]);
		num2++;
		arrayMultiplier();
	}else if(num1<4)
	{	
		num1=0;	
		printf("\n");
		num1++;
		arrayMultiplier();	
	}
};



int main()
{
arrayMultiplier();

};
