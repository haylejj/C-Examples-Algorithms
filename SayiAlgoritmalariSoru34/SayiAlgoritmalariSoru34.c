#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isOriginalNumber(int);

int main(void) {
	
	int sayi1;
	printf("sayi giriniz->>\n");
	scanf("%d",&sayi1);
	
	int result=isOriginalNumber(sayi1);
	if(result==1) printf("%d sayisi  orijinal sayidir.\n",sayi1);
	else printf("%d sayisi  orijinal sayi DEGILDIR!!!!!.\n",sayi1);
	
	return 0;
}
int isOriginalNumber(int sayi){
	int temp=sayi;
	int son2=temp%100;
	int ilk2=temp/100;
	
	int result=pow(son2+ilk2,2);
	if(result==sayi) return 1;
	else return 0;
}