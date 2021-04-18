#include<stdio.h>
#include<stdlib.h>

int B[3][4] = {{2,3,6},{4,5,8}};
int i, j;


int main()
{

int A[5] = {2,4,6,8,10};
int *p = A;
printf("%p\n", p);
printf("%d\n", *p);
printf("%d\n", *p+2);

for(i = 0; i<2; i++)
{
	j = 0;
	for(j = 0; j<3; j++)
	{
		printf("B[%d][%d]%p\n", i, j, *(B+i)+j);
	}
};



int (*p0)[4] = B;

printf("%p\n", B);
printf("this one is *B %p \n", *B );
printf("this one is B+1 %p\n", B+1);
printf("this one is *B+1 %p\n", *B+1);
printf(" *(B+2) %p\n", *(B+2));
printf(" *B+2 %p\n", *B+2);
printf("this one is *(B+1)+2  %p\n", *(B+1)+2);
	return 0;
}




