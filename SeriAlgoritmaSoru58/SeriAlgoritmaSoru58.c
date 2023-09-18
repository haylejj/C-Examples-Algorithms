#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int faktoriyel(int);
float hesapla(int,int);

int main(void) {
	
	int x,n;
	printf("Lutfen x degeri ve n degerini giriniz.->>>\n");
	scanf("%d%d",&x,&n);
	
	printf("Sonuc:%f \n",hesapla(x,n));
	
	return 0;
}
int faktoriyel(int sayi){
	int fak=1;
	for(int i=2;i<=sayi;i++)
		fak*=i;
	
	return fak;
}
float hesapla(int x,int n){
	
	float toplam=0;
	
	for(int i=1;i<=n;i++){
		toplam+=pow(x,i)/faktoriyel(i);
	}
	return toplam;
}