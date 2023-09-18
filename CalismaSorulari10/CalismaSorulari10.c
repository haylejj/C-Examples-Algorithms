#include <stdio.h>
#include <stdlib.h>

void notGir(int[]);
double ortalamaHesapla(int[]);
int enYuksekNot(int[]);
int enDusukNot(int[]);
int main(void) {
	
	int array[20];
	notGir(&array);
	double ortalama=ortalamaHesapla(&array);
	int max=enYuksekNot(&array);
	int min=enDusukNot(&array);
	
	printf("\n Sinifin  Ortalamasi:%lf \n  En Yuksek Not:%d \n En Dusuk Not:%d \n",ortalama,max,min);
	
	return 0;
}
void notGir(int array[20]){
	for(int i=0;i<20;i++){
		printf("%d . notu giriniz.\n",i+1);
		scanf("%d",&array[i]);
	}
}
double ortalamaHesapla(int array[20]){
	double toplam=0;
	for(int i=0;i<20;i++){
		toplam+=array[i];
	}
	return toplam/20;
}
int enYuksekNot(int array[20]){
	int max=array[0];
	for(int i=1;i<20;i++){
		if(max<array[i])
		max=array[i];
	}
	return max;
}
int enDusukNot(int array[20]){
	int min=array[0];
	for(int i=1;i<20;i++){
		if(min>array[i])
		min=array[i];
	}
	return min;
}




