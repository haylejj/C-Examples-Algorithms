#include <stdio.h>
#include <stdlib.h>

int isPrime(int);

int main(void) {
	
	int sayi,result;
	do{
		
		printf("Sayi giriniz.->>>\n");
		scanf("%d",&sayi);
		result=isPrime(sayi);
		if(result==1) printf("%d Sayisi asal sayidir.\n",sayi);
		else printf("%d Sayisi asal sayi degildir!!!!!\n",sayi);
		
	}while(sayi!=0);
	
	
	return 0;
}
int isPrime(int sayi){
	
	for(int i=2;i*i<=sayi;i++){
		if(sayi%i==0)
		return 0;
	}
	return 1;
}