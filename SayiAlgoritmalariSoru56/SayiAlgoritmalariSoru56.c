#include <stdio.h>
#include <stdlib.h>

void hesapla(int);

int main(void) {
	
	int sayi;
	printf("Lutfen bir sayi giriniz.->>>>\n"); scanf("%d",&sayi);
	
	 hesapla(sayi);
	
	return 0;
}
void hesapla(int sayi){
	
	int max=0,counter=0,bolunen=0;
	
	while(sayi!=1){
		counter++;
		if(sayi%2==1){
			sayi=sayi*3+1;
			bolunen=0;
		}
		
		else{
			if(bolunen<sayi)
			bolunen=sayi;
			sayi/=2;
		}
		if(max<sayi)
		max=sayi;
	}
	printf("%d adimda surdu.\n islem sirasinda sayinin aldigi max deger %d.\n islem sirasinda %d sayisindan sonra hep cift oalrak 1 e ulasti.\n",counter,max,bolunen);
	
	
} 