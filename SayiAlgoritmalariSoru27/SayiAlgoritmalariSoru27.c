#include <stdio.h>
#include <stdlib.h>

int decimalToBinary(int,int[10]);
void printfBinary(int,int[10]);
int main(int argc, char *argv[]) {
	
	int decimal,binary[10];
	printf("Decimal sayiyi giriniz...\n");
	scanf("%d",&decimal);
	
	int length=decimalToBinary(decimal,&binary);
	printfBinary(length,&binary);
	
	return 0;
}
int decimalToBinary(int decimal,int binary[10]){
	
	int length=0;
	while(decimal!=0){
		
		binary[length++]=decimal%2;
		decimal/=2;
	}
	return length;
}
void printfBinary(int length,int binary[10]){
	
	printf("Ikilik (binary) sayi: ");
	for(int i=length-1;i>=0;i--){
		printf("%d",binary[i]);
	}
}