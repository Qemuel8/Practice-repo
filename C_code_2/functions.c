#include<stdio.h>
#include<stdlib.h>



int main()
{
	int n;
	printf("Enter size of array\n");
	scanf("%d",&n);
	int *A = (int*)calloc(n, sizeof(int));
	free(A);
	for(int i = 0; i<n; i++)
	{
		A[i] = i+1;
		
	}
	int *B = realloc(A, 2*n*sizeof(int));

	for(int i = 0; i<n; i++)
	{

		printf("%d", A[i]);
		
	}

	
	
	return 0;
};
