#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// callback function should compare two integers, should return 1 if first element has
// higher rank, 0 if elements are equal and -1 if second elements has higher rank

int compare(int a, int b)
{
	if(a > b) return -1;
	else return 1;
}

int absolute_compare(int a, int b)
{
	if(abs(a) > abs(b)) return 1;
	return -1;
}



void bubbleSort(int *A, int n, int (*compare)(int,int))
{
   int i, j, temp;
   for(i = 0; i<n-1; i++)
   {
      for(j=0; j<n-1; j++) 
      {
         if(compare(A[j], A[j+1]) > 0)
         {
            temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
         }
      }
   }
}

int compare2(const void* a, const void* b) // the const here means that you cant change the address of these pointer variables
{
	int A = *((int*)a);
	int B = *((int*)b);
	return abs(A) - abs(B);// returning negative means B is higher vice versa
}

int main()
{
	int i, A[] ={-31,22,-1,50,-6,4}; // sort in increasing order => {1,2,3,4,5,6}
	qsort(A,6,sizeof(int), compare2);
	for(i =0;i<6;i++) printf("%d ",A[i]);
	return 0;
}
