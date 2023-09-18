#include <stdio.h>
#include <stdlib.h>

void asalCarpanlar(int);

int main(void) {
	
	int sayi;
	printf("Lutfen bir sayi giriniz.\n");
	scanf("%d",&sayi);
	asalCarpanlar(sayi);

	return 0;
}
void asalCarpanlar(int sayi){
	
	for(int i=2;i<=sayi;i++){
		int count=0;
		while(sayi%i==0){
			count++;
			sayi/=i;
		}
		if(count>0)
		printf("%d^%d ",i,count);
	}
	printf("\n");
}