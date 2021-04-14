#include<stdio.h>
#include<stdlib.h>

long int array[20][20] = {
{2,3,4,5},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0}
};
int num1 = 0;
int num2 = 0;
int num3 = 1;
void squares()
{
	if(num2<4)
	{
		array[num3][num2] = array[num1][num2] * array[num1][num2];
		printf("%ld ",array[num3][num2]);
		num2++;
		squares();
	}
	if(num3<4)
	{
		printf("\n");
		num2=0;
		num3++;
		num1++;
		squares();
	}

};
int main()
{
	squares();
	return 0;
};
