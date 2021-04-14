#include<stdio.h>
#include<stdlib.h>
int matris[5][4] = {  // y    y   y   y
                         {10, 15, 20, 25}, //x
                         {30, 35, 40, 45}, //x
                         {32, 59, 63, 61}, //x
                         {50, 55, 60, 65}, //x
                         {27, 35, 10, 33}  //x
                        };
int x = 0;
int y = 0;

void  multiplication()
{
	int matrisM[] = {1,1,1,1};
 	if(y<4)
	{
		
		for(x; x<5; x++)
		{
			matrisM[y] *= matris[x][y];
			printf("%d \n", matrisM[y]);
		};
		y++;
		x=0;
		multiplication();	
	}
};

int main()
{
multiplication(matris);
return 0;
}
