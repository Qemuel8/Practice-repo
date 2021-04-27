#include<stdio.h>
#include<stdlib.h>


int* add(int* a, int* b)
{
	int* c = (int*)malloc(sizeof(int));
	*c = (*a)+(*b);
	return c;
	
};

int main()
{	
	int a = 2, b = 4;
	int* ptr  = add(&a,&b);
	printf("Sum  = %d\n", *ptr);
	
	
	return 0;
};
