#include <stdio.h>
#include <stdlib.h>

float kombinasyonHesapla(int);

int main(void) {
	
	
	int n,r;
	float kom;
	printf("n ve r degerlerini sirasiyla giriniz.->>\n");
	scanf("%d%d",&n,&r);
	
	kom=kombinasyonHesapla(n)/(kombinasyonHesapla(r)*kombinasyonHesapla(n-r));
	printf("\n kombinasyon=%2.f",kom);
	return 0;
}
float kombinasyonHesapla(int k){
	int fak=1;
	for(int i=2;i<=k;i++)
		fak*=i;
	return(fak);
}