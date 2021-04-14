#include <stdio.h>

void printArray(int arr[], int size)
{
	for(int i = 0; i<size; i++)
	{
		printf("%d ", arr[i]);

	}
}
int doSomething()
{

}



int main()
{
	int slicesEachMeal[] = {4, 5, 4, 6, 3, 2};
	printArray(slicesEachMeal, 6);	
	
	
	
	
	
	return 0;
}
