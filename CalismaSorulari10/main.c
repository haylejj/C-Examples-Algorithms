#include <stdio.h>
#include <stdlib.h>

int hesapla(int);

int main(void) {
	int sayi;
	printf("Bir sayi giriniz.\n");
	scanf("%d",&sayi);
	printf("Girilen sayinin basamaklarinin küpleri toplami %d dir.\n",hesapla(sayi));
	
	
	return 0;
}
int hesapla(int sayi){
	int toplam=0;
	int basamak;
	while(sayi!=0){
		basamak=sayi%10;
		sayi/=10;
		toplam+=pow(basamak,3);
	}

}