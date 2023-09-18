#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long binaryToDecimal(long);

int main(void) {
	long  binary;
	printf("Decimale cevrilecek binary sayiyi giriniz->>>>\n");
	scanf("%ld",&binary);
	printf("%ld binary sayisinin decimal karsiligi %ld dir.\n",binary,binaryToDecimal(binary));
	return 0;
}
long binaryToDecimal(long binary){
	int count=0;
	long decimal=0;
	while(binary!=0){
		
		int bit=binary%10;
		decimal+=bit*pow(2,count);
		binary/=10;
		count++;
	}
	return decimal;
}