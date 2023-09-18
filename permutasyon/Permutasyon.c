#include <stdio.h>
#include <stdlib.h>

float permutasyonHesapla(int);
int main(void) {
	int n,r;
	float permutasyon;
	printf("n ve r degerlerini sirasiyla giriniz.->>\n");
	scanf("%d%d",&n,&r);
	
	permutasyon=permutasyonHesapla(n)/permutasyonHesapla(n-r);
	printf("\n permutasyon=%2.f",permutasyon);
	return 0;
}
float permutasyonHesapla(int k){
	int fak=1;
	for(int i=2;i<=k;i++)
		fak*=i;
	return(fak);
}