#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int eUzeriXHesapla(int);

int main(void) {
	
	int x;
	printf("\n X degeri giriniz.\n"); scanf("%d",&x);
	
	printf("e uzeri %d in sonucu %d dir.\n",x,eUzeriXHesapla(x));
	
	return 0;
}
int eUzeriXHesapla(int x){
	int toplam=1;
	
	for(int i=1;i<5;i++){
		toplam+=pow(x,i)/faktoriyel(i);
	}
	return toplam;
}
int faktoriyel(int sayi){
	int fak=1;
	for(int i=2;i<=sayi;i++){
		fak*=i;
	}
	return fak;
}