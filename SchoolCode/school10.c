#include<stdio.h>
#include<stdlib.h>
int input;
long int temp;
int temp2;
int num1 = 0;
int array[] = {0};
int i;

void function()
{
printf("Enter a number:");
scanf("%d", &input);
while(temp<input)
{

for(i = 1; i<1000; i++ )
{	num1++;
	if(num1%i == 0 && num1!=input)
	{	
		temp += num1;
	
		if(temp == num1)
			{
			array[i] = temp2;
			temp=0;
			i++;
			}
	}
}
}
}







int main()
{
	function();
	for(int i; i<1000; i++)
{

	printf(" %d ", array[i]);
}
	return 0;
}

