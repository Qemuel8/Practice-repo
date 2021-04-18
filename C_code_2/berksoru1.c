#include <stdlib.h>

#include <stdio.h>
//ekrandan okunacak 10 adet sayiyi okuyan ve toplayan recursive fon
int toplam, sayi, sayac = 0;
void rfonksiyon()
 {
	if(sayac<10)
 	{
		printf("bir sayi giriniz:");
		scanf("%d", &sayi);
		toplam = toplam + sayi;
		printf("Toplam: %d",toplam);
		sayac++;
		rfonksiyon();
	}
}

void main() {
rfonksiyon();


}

