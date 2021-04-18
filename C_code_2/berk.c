#include <stdlib.h>
#include <stdio.h>

//ekrandan okunacak 10 adet sayiyi okuyan ve toplayan recursive fonk


void rfonksiyon(int sayi) {

int toplam;
if(sayi>0) {


    toplam = toplam + sayi;
    printf("Toplam: %d",toplam);
    scanf("%d",sayi);
    rfonksiyon(sayi-1);
}
}
void main() {
int sayi = 1 ;
rfonksiyon(sayi);
}
int main()
{




	return 0;
}

