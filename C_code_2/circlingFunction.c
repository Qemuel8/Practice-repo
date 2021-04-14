#include<stdio.h>
#include<stdlib.h>
int num1 = 0;
int num2 = 0;
int array[] = {};

void function2()
{
	num1++;
	function3();

};
void function3()
{
	num1++;
	array[num2] = num1;
	num2++;
	printf("%d ", num1 );
	if(num1>100)return;
	function1(); 
};
 void function1()
{
	num1++;
	function2();
};



int main()
{
	function1();
	
	
	return 0;
}

