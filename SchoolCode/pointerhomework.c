#include<stdio.h>
#include<stdlib.h>
int *Function(int *a, int *b, int *c, int *d)
{

    int *sum = (int*)malloc(sizeof(int));
    *sum = (((*a) / (*b)) * (*c)) + (*d);

    return sum;
}


int main()
{
int a = 10, b = 5, c = 15, d = 20;
int *p = Function(&a,&b,&c,&d);
printf("Your sum is: %d\n", *p );
free(p);
    return 0;
}
