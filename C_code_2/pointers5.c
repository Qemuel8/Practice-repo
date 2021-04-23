#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int* B_array;

B_array  = (int*)malloc(100*sizeof(int));


*(B_array)[2][2]
{
         { {2,5}, {7,9} },
 
         { {3,4}, {6,1} },

         { {0,8}, {11,13} }
 };

int j, k, l;

void arrayPrinter()
{

printf("your numbers are:");
for(j = 0; j<3; j++)
{	printf("\n");	
	for(k = 0; k<2; k++)
	{	printf("\n");
		for(l=0; l<2; l++)
		{
			printf("%d ", *(*(*(B_array+j )+k )+l ));
			
			
		}
	}		
};
};


arrayPrinter();

};
