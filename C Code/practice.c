#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int print;
int input;
int i = 0;
int j = 0;
int long array[][7] = {{},{},{},{},{},{}};
int num1 = 0;
int num2 = 0;
int num3 = 1;
int fact = 1;
int miniArray[10] = {0};
void squares()
{
	if(num2<5)
	{
		array[num3][num2] = array[num1][num2]  * array[num1][num2];
		printf("%ld  ", array[num3][num2]);
		num2++;
		squares();
	}else
	{
 		num2 = 0;
		num3++;
		num1++;
		printf("\n");
	}	
};
void squareRoot()
{
	if(num2<5)
	{	
		array[num3][num2] = sqrt(array[num1][num2]);
		printf("%ld  ", array[num3][num2]);
		num2++;
		squareRoot();
	}else
	{	
		printf("\n");
		num2 = 0;
		num3++;
		num1++;
		
	};
	
}; 
int factorial(int k)
{	
	if(k>1)
	{	
		fact = fact*k;
		k--;
		factorial(k);
	}
	k = 0;
	return fact;
	
}
void factorialArray()
{
	if(num2<5)
	{	
		array[num3][num2] = factorial(array[num1][num2]);
		printf("%ld  ",array[num3][num2]);
		fact=1;
		num2++;
		factorialArray();
	} else
	{
		printf("\n");
		num2 = 0;
		num3++;
		num1++;
	}


};
void numberTyper()
{
char units[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	while(array[num3][num2]>10)
	{
		miniArray[j] = array[num3][num2]%10;
		print = miniArray[j];
	switch (print)
	{
	
		case 0:
		printf("%s", units[print]);
		break;

		case 1:
		printf("%s", units[miniArray[j]]);
		break;

		case 2:
		printf("%s", units[miniArray[j]]);
		break;

		case 3:
		printf("%s", units[miniArray[j]]);
		break;

		case 4:
		printf("%s", units[miniArray[j]]);
		break;

		case 5:
		printf("%s", units[miniArray[j]]);
		break;

		case 6:
		printf("%s", units[miniArray[j]]);
		break;

		case 7:
		printf("%s", units[miniArray[j]]);
		break;

		case 8:
		printf("%s", units[miniArray[j]]);
		break;

		case 9:

		printf("%s", units[miniArray[j]]);
		break;
	
	}
		j++;
		array[num3][num2] = (array[num3][num2]-(array[num3][num2]%10))/10;
	}
	j++;
	miniArray[j] = array[num3][num2];
	num2++;
if(num2<5) numberTyper();
};



int main()
{
	printf("please enter a 5 digit number:");
	scanf("%d", &input);

	for(i; i<5; i++)
	{
		array[0][i] = input%10;
		input = (input-input%10)/10;
	}

squares();
squareRoot();
factorialArray();
numberTyper();

	return 0;
};
