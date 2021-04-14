#include <stdio.h>
#include <stdlib.h>


int main()
{
	int slices = 20;
	int *p = &slices;
	
	printf("slices: %d \n ", slices);
	printf("slices (through pointers): %d\n", *p);
	slices = 21;	
	
	printf("slices: %d \n ", slices);		
	printf("slices (through pointers): %d\n", *p);
	*p = 25;

	printf("slices: %d \n ", slices);		
	printf("slices (through pointers): %d\n", *p);
	 // *p++ will not work because ++ has presedence over the asteriks * so we need this:
	(*p)++;

	printf("slices: %d \n ", slices);		
	printf("slices (through pointers): %d\n", *p);
return 0;
}
