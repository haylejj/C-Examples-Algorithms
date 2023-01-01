#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,array[10];
	int orta,sol,sag,arananSayi,isH=0;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		array[i]=rand()%100;
		printf("%d ",array[i]);
	}
	printf("\nAranan sayiyi giriniz.->>>\n");
	scanf("%d",&arananSayi);
	sol=0;
	sag=9;
	while(sol<=sag)
	{
		orta=(sol+sag)/2;
		if(arananSayi==array[orta])
		{
			isH=1;
		}
		else if(arananSayi>array[orta]) sol=orta+1;
		else sag=orta-1;
	}
	
	if(isH==1) printf("%d sayisi dizide bulundu.",arananSayi);
	else printf("%d sayisi bulunamadi.",arananSayi);
	return 0;
}