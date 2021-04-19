#include<stdio.h>
#include<stdlib.h>


void func(int (*A)[2][2])
{


}



int main()
{
	
	int B[2][3] = {{2,3,6},{4,5,8}}; // 4byets each
	//  		B[0][0]  B[1][0]
	//		B[0][1]  B[1][1]
	//		B[0][2]  B[1][2]
	//               B[0]     B[1]
	


	int C[3][2][2] =
{
	{ {2,5}, {7,9} },

	{ {3,4}, {6,1} },

	{ {0,8}, {11,13} }
};

printf("*(*(*(c+1)+1)+1) is : %d\n (it should be 1)\n  )", *(*(*(C+1)+1)+1));

int A[2] = {1,2};
func(C);

	return 0;
}
