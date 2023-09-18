#include <stdio.h>
#include <stdlib.h>

void fibonacciHesapla(int[10]);

int main(void) {
	
	int fibonacci[10];
	
	fibonacci[0]=1,fibonacci[1]=1;
	printf("%d %d ",fibonacci[0],fibonacci[1]);
	for(int i=2;i<10;i++){
		fibonacci[i]=fibonacci[i-1] + fibonacci[i-2];
		printf("%d ",fibonacci[i]);
	}
	
	return 0;
}
