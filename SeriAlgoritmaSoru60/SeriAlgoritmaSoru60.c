#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float cosHesapla(float,int);
int faktoriyel(int);

int main(void) {
	float x;
	int n;
	printf("Lutfen x ve n degerlerini giriniz.\n"); scanf("%f%d",&x,&n);
	
	printf("\n Cos(%f) in degeri %f dir.\n",x,cosHesapla(x,n));
	
	return 0;
}
int faktoriyel(int sayi){
	int fak=1;
	for(int i=2;i<=sayi;i++)
	fak*=i;
	return fak;
}
float cosHesapla(float x,int n){
	
	float toplam=1;
	for(int i=1;i<=n-1;i++ ){
		toplam+=pow(-1,i)*pow(x,2*i)/faktoriyel(2*i);
	}
	return toplam;
}