#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int isPrime(int);
int isMersenne(int);
int main(int argc, char *argv[]) {
	
	int sayi;
	printf("Sayi giriniz\n"); scanf("%d",&sayi);
	
	int result=isMersenne(sayi);
	if(result==1) printf("%d sayisi Mersenne sayisidir.\n",sayi);
	else printf("%d sayisi Mersenne sayisi DEGILDIR!!!",sayi);
	
	return 0;
}
int isPrime(int sayi){
	
	for(int i=2;i*i<=sayi;i++){
		if(sayi%i==0)
		return 0;
	}
	return 1;
	
}
int isMersenne(int sayi){
	
	if(isPrime(sayi)==1){
		
		sayi=pow(2,sayi)-1;
		if(isPrime(sayi)==1)
		return 1;
	}
	return 0;
	
}