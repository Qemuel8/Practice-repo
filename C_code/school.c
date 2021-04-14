#include<stdio.h>
#include<stdlib.h>
//         x  y 	
int matris[5][4] = {  // y    y   y   y
			{10, 15, 20, 25}, //x
			{30, 35, 40, 45}, //x
			{32, 59, 63, 61}, //x
                        {50, 55, 60, 65}, //x
			{27, 35, 10, 33}  //x
			};

int multiplied[][4] = {{0},{0},{0},{0},{0}};
int x = 0;
int y = 0;

int multiply(multiplied)
{
int multiply[] = {1,1,1,1};
for(y = 0; y<4; y ++)
	{
	for(x = 0; x<4; x++)
		{
			multiply[y] =multiply[y] * multiplied[x][y];
		}
		
 		printf("%d", multiply[y]);
	}	  
};
int main()
{
multiply(matris);

  return 0;
}

