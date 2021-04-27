#include <stdlib.h>
#include<stdio.h>
#include<time.h>


/*void numbit(int **array, int nrows, int ncolumns)
	{
	int i, j, k = 0;
	for(i = 0; i < nrows; i++)
		{
		for(j = 0; j < ncolumns; j++)
			array[i][j] = k;
			k++;
		}
	}

*/

int main()
{

srand(time(NULL));
int i, nrows, ncolumns;
int **array;
nrows = 5;
ncolumns = 5;

	array = malloc(nrows * sizeof(int *));
	if(array == NULL)
		{
		printf("out of memory\n");
		return 0;
		}
	for(i = 0; i < nrows; i++)
		{
		array[i] = malloc(ncolumns * sizeof(int));
		if(array[i] == NULL)
			{
			printf("out of memory\n");
			return 0;
			}
		}
//numbit(array, nrows, ncolumns);
for(int j = 0; j<5; j++)
{
	printf("\n");
	for(int k = 0; k<5; k++)
	{
			
		int temp = (1 + rand() %100);
		array[j][k] = temp;
		srand(time(NULL));
		printf(" %d ", (*(*array+j)+k));
		
	}


}
 	return 0;
}
