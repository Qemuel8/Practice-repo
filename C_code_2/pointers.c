#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1 = 5;
	int *p = &num1;
	printf("The value of num1 is: %d\n", *p);
	printf("The address of num1 is: %p\n", p);
	printf("The address of pointer p is: %p\n", &p);	
	int **p0 = &p;
	printf("The value of p0 which is the address of p is: %p\n", p0);
	printf("the address of p0 is:%p\n", &p0);
	printf("The value of num1 stored in p0 is:%d\n", **p0);	
	
	return 0;
}

