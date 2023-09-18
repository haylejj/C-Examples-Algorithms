#include <stdio.h>
#include <stdlib.h>

int isPrimeNumber(int);

int main(int argc, char *argv[]) {
	int sayi;
	while(sayi!=0){
		printf("Lütfen sayi giriniz->>>\n");
		scanf("%d",&sayi);
		
		int result=isPrimeNumber(sayi);
		if(result==1) printf("\n %d sayisi asal sayidir.\n",sayi);
		else printf("\n %d sayisi asal sayi degildir.\n",sayi);
	}
	
	
	return 0;
}
int isPrimeNumber(int sayi){
	
	for(int i=2;i*i<=sayi;i++){
		if(sayi % i ==0) return 0;	
	}
	 return 1;
}