#include<stdio.h>
#include<stdlib.h>



int main()
{
	int n;
	printf("Enter size of array\n");
	scanf("%d",&n);
	int *A = (int*)malloc(n*sizeof(int));
	free(A);
	for(int i = 0; i<n; i++)
	{
		A[i] = i+1;
		
	}
	int *B = realloc(A, (n/2)*sizeof(int));
	printf("prev block address = %p, new address = %p\n",A,B);
	for(int i = 0; i<2*n; i++)
	{

		printf("%d", B[i]);
		
	}
	int aSD;

	
	
	return 0;
}
