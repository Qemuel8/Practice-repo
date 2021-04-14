#include <stdio.h>
#include <math.h>
int main()
{
	double a;
	double b;
printf("please enter a number:");
scanf("%lf", &a);
printf("Please enter another number:");
scanf("%lf", &b);
	double  c =sqrt((a * a) + (b * b));
printf("Your hypotenuse is: /n %f", c);
	

	return 0;
}
