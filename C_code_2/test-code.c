#include<stdio.h>
#include<stdlib.h>

int num1 = 0;

void testFunction()
{
	if(num1<5)
	{
		printf("%d", num1);
		num1++;
		testFunction();
	}
	


}


int main()
{	
	testFunction();
 	return 0;
}
