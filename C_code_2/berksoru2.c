#include <stdio.h>

#include <stdlib.h>
/*
Elinizde bulunan 25 elemanlı bir double dizinin içinde, aradığımız herhangi bir double sayının kaçıncı dizi elamanı(indis numarası) olduğunu bulan bir program yazınız.

Örnek : 25.08 sayısını arıyor olalım. Bu sayı da dizide 12 numaralı eleman olsun. Bu durumda programınız 11 sayısı vermeli(dizilerin ilk elemanın 0 olduğunu unutmayın). (25)

*/
int count = 0;
double input;
double dizi[26] = {1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2.0,2.1,2.2,2.3,2.4,2.5,2.6,2.7,2.8,2.9,3.0,3.1,3.2,3.3,3.4,3.5};

void counter()
{
	if(input!=dizi[count]) //true
	{
	count++;
	counter();
	}	
};
void main() {
printf("1.1 ile 3.5 arasinda bir sayi giriniz:");
scanf("%lf", &input);
counter();
printf("Girdiginiz sayi %d'nci elemandir.", count);
}
