#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int carpanlaraAyir(int);

int main(void) {
	int sayi1,sayi2;
	printf("Lutfen 2 sayi giriniz.->>\n");
	scanf("%d%d",&sayi1,&sayi2);
	
	int toplam1=carpanlaraAyir(sayi1);
	int toplam2=carpanlaraAyir(sayi2);
	
	if(toplam1==toplam2)
	printf("\n%d sayisi ile %d sayisi DOST SAYIDIR.\n",toplam1,toplam2);
	else printf("\n%d sayisi ile %d sayisi DOST SAYI DEGILDIR!!!!.\n",toplam1,toplam2);
	return 0;
}
int carpanlaraAyir(int sayi){
	int toplam=0;
	for(int i=1;i<sayi;i++){
		if(sayi%i==0)
		toplam+=i;
	}
}