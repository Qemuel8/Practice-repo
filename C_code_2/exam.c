#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int arrayAdder()
{
    int array[3][5];
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<5;j++)
        {
            array[i][j] = pow(i, j);
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}



int main()
{
    arrayAdder();
    return 0;
}


