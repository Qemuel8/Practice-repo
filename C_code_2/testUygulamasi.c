#include<stdio.h>
#include<stdlib.h>


int function(int num1, int num2);;
{
    int num3;
    printf("selam bir sayi gir \n");
    scanf("%d", &num3);
    return num3 * (num1 + num2);

}

int main()
{

    int num4 = function(2,5);
    printf("sayiniz %d", num4);

    return 0;
}