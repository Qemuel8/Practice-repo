#include<stdio.h>
#include<stdlib.h>

int num1 = 0;

int  array[] = {1, 2, 3, 4, 5};
int arrayCopy[] = {0};

void arrayCopier()
{
	if(num1<5)
	{
		arrayCopy[num1] = array[num1];
		printf("%d",arrayCopy[num1]);
		num1++;
		arrayCopier();
		
	}

};





int main()
{
	arrayCopier();

	return 0;
}
