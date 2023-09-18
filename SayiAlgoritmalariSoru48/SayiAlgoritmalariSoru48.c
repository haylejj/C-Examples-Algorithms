#include <stdio.h>
#include <stdlib.h>

int isSmith(int);
int rakamlarToplami(int);
int asalCarpanlarToplami(int);
int isPrime(int);

int main(void) {
    int sayi;
    printf("\nSayi giriniz: ");
    scanf("%d", &sayi);

    if (isPrime(sayi) == 0) {
        int result = isSmith(sayi);

        if (result == 1)
            printf("\n%d sayisi Smith Sayisidir!!!\n", sayi);
        else
            printf("\n%d sayisi Smith Sayisi Degildir!!!\n", sayi);
    } else {
        printf("Lutfen asal olmayan bir tam sayi giriniz.\n");
    }

    return 0;
}

int isSmith(int sayi) {
    int toplamRakam = rakamlarToplami(sayi);
    int toplamCarpanlar = asalCarpanlarToplami(sayi);

    if (toplamRakam != toplamCarpanlar)
        return 0;
    else
        return 1;
}

int isPrime(int sayi) {
    for (int i = 2; i * i <= sayi; i++) {
        if (sayi % i == 0)
            return 0;
    }
    return 1;
}

int rakamlarToplami(int sayi) {
    int rakam, toplam = 0;
    while (sayi != 0) {
        rakam = sayi % 10;
        toplam += rakam;
        sayi /= 10;
    }
    return toplam;
}

int asalCarpanlarToplami(int sayi) {
    int toplam = 0;

    for(int i=2;i<=sayi;i++){
		while(sayi%i==0){
			toplam+=rakamlarToplami(i);
			sayi/=i;
		}
		
	}

    return toplam;
}