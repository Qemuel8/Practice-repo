# include<stdio.h>
# include<stdlib.h>
long int count = 1;
int divider = 1;
long int temp = 0;
int input;
void function()
{
if(count<input)
{
	if(count%divider ==  0 && count!=divider)
	{
		temp += divider;
			
	}

	if(count ==  divider && count == temp)
	{ 
		printf("%ld is a perfect number. \n", temp);
		divider=0; 
		temp = 0;
		count++;
	}
	if(count == divider && count!= temp){count++; divider=0; temp = 0;}
	divider++;
	if(count!= input)function();
}



}




int main()
{
printf("Please enter a number:");
scanf("%d", &input);
function(input);

	return 0;
}
