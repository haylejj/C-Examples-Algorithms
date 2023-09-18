#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int isEuler(int);
int isPrime(int);
int main(void) {
	
	int n;
	
	do{
		printf("Lutfen bir sayi giriniz.\n");
		scanf("%d",&n);
	}while((n<2) || (n>41));
	int result=isEuler(n);
	if(result==1) printf("%d Euler sayisidir.",n);
	else printf("%d Euler sayisi degildir!!!!.",n);
	
	return 0;
}
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int isEuler(int n){
	int counter=0;
	for(int x=0;x<=n-2;x++){
		int islem=x*x+x+n;
		if(!isPrime(islem))
		return 0;
	}
	return 1;
}
