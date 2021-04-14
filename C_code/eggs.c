#include <stdio.h>
int main()
{
	
	int eggs;
	printf("How many eggs do you have?");
	scanf("%i", &eggs);
	
	double dozen = (double) eggs / 12;
	
	printf ("You have %f dozen eggs. \n", dozen);
	return 0;
}
