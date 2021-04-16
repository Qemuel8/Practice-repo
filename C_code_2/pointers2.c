#include<stdio.h>
#include<stdlib.h>


void sumOfElements(int* array, int size)
{
	int total = 0;
	for (int i =0; i<size; i++)
	{
		total += array[i];
		printf("%d\n", total);
	}
}

int main()
{
int array[] = {1,2,3,4,5};
int size = sizeof(array)/sizeof(array[0]);
printf("The size of the array is: %d\n", size);
sumOfElements(array, size);
	return 0;
}
