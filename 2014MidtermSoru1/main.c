#include <stdio.h>
#include <stdlib.h>

int isMukemmelSayi(int );


int main(int argc, char *argv[]) {
	
	int sayi;
	do{
		
		printf("Sayi Giriniz.\n");
		scanf("%d",&sayi);
		int result=isMukemmelSayi(sayi);
		if(result==1) printf("\n %d sayisi mukemmel sayidir. :) \n",sayi);
		else printf("\n %d sayisi mukemmel degildir!!!!.\n",sayi);
		
	}while(sayi!=0);
	
	return 0;
}
int isMukemmelSayi(int sayi){
	int toplam=0;
	for(int i=1;i<sayi;i++){
		if(sayi % i ==0)
		toplam+=i;
	}
	if(toplam==sayi) return 1;
	else return 0;
}