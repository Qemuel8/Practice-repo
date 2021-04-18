#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//random uretilen 20 adet sayiyi tek boyutlu dizi icine kaydeden fonksiyon.

int dizi[20] = {0};
int sayi = 0;
int i= 0;
void arrayAdder() {
if(i<20)
{
	sayi = 1 + (rand() % 19);
	dizi[i] = sayi;
	i++;
	printf("Test: %d\n",dizi[i]);
	arrayAdder();
	}
}

int main() {

srand(time(NULL));
arrayAdder();

return 0;
}
