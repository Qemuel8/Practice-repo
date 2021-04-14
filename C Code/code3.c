#include <stdio.h>

int main(){

	int radius; //The distance from outside to the center of the circle.
	printf("Please enter a radius number:");
	scanf("%i",&radius ); //address-of operator	
	
	double  area = 3.14159 * (radius * radius); // logical error with int
	printf("The area of a circle with %i radius is %f\n",radius, area);
	return 0;
}
