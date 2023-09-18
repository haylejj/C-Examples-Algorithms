#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	int sayi;
	printf("Sayi giriniz->>>\n");
	scanf("%d",&sayi);
	
	int birler=sayi%10;
	int onlar=(sayi%100)/10;
	int yuzler=(sayi%1000)/100;
	int binler=sayi/1000;
	
	printf("%d sayisinin \n binler basamagi %d\n yuzler basamagi %d\n onlar basamagi %d\n birler basamagi %d\n",sayi,binler,yuzler,onlar,birler);
	return 0;
}