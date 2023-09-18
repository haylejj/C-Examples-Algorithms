#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int basamakHesapla(int);
bool isArmstrongNumber(int,int);
int main(void) {
	
	int sayi;
	bool result;
	printf("Lutfen bir sayi giriniz.\n");
	scanf("%d",&sayi);
	
	int counter=basamakHesapla(sayi);
	result=isArmstrongNumber( sayi, counter);
	 
    if (result)
        printf("%d bir Armstrong sayisidir.\n", sayi);
    else
        printf("%d bir Armstrong sayisi degildir.\n", sayi);
    
	return 0;
}
int basamakHesapla(int sayi){
	int counter=0;
	if(sayi==0) 
	return 1;
	else {
		while(sayi !=0){
			sayi /=10;
			counter++;
		}
	}
	return counter;
}
bool isArmstrongNumber(int sayi,int counter){
	int reminder,sum=0;
	int temp=sayi;
	while(temp !=0){
			reminder=temp%10;
			sum+=pow(reminder,counter);
			temp/=10;
		}
		if(sayi==sum) return true;
		else return false;
}










