#include<stdio.h>
#include<stdlib.h>

int function(int number)
{
	int factorial = 1;
	for (int i = number; i> 1; i--)
	{
		factorial *=i;
		}
	return factorial;
}

int main()
{

int factorial = function(10);
printf(" Your result is %d", factorial); 

return 0;
}
