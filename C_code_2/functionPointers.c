#include<stdlib.h>
#include<stdio.h>
void printHello(char *name)
{
	printf("%s Hello\n", name);
}




int add(int a, int b)
{
	return a+b;	
}

int main()
{
	int c;
	int (*p)(int, int);// This is the function pointer. A pointer that points to a function named .
	p = add; // address of add() is in p. no need for  &.
	c = p(2,3);//de-referencing and executing the function. passed arguments. no need to say (*p). 
	printf("%d", c);
	
	void (*ptr)(char*);
	ptr  = printHello;
	ptr("Tom");
	return 0;
}
