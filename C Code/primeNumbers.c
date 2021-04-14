#include<stdio.h>
#include <stdbool.h>


 bool  isPrime(int input2)
 { 
   for(int i = input2; i > 1; i--)
 {
   
 	if(input2 %i == 0)
{
 	return false;
	   }
	} 		
	return true;
}


int main()
{

int input;
printf("Please enter a number:");
scanf("%d input", &input);

for(int i = input; i > 1; i--)
{ 

bool prime = isPrime(i);

if(prime)
 {
	printf("your number %d  is prime", i);
}
}

return 0;
}

