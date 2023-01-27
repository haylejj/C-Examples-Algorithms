#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
	int saat;
	int dakika;
	double saniye;
}saatBilgileri;

saatBilgileri farkiBul(saatBilgileri saat1,saatBilgileri saat2)
{
	saatBilgileri saatfarki;
	double saat1saniye=saat1.saat*3600+saat1.dakika*60+saat1.saniye;
	double saat2saniye=saat2.saat*3600+saat2.dakika*60+saat2.saniye;
	if(saat1saniye>=saat2saniye)
	{
		if(saat1.saniye<saat2.saniye)
		{
			saat1.saniye+=60;
			saat1.dakika-=1;
		}
		if(saat1.dakika<saat2.dakika)
		{
			saat1.dakika+=60;
			saat1.saat-=1;
		}
		saatfarki.saat=saat1.saat-saat2.saat;
		saatfarki.dakika=saat1.dakika-saat2.dakika;
		saatfarki.saniye=saat1.saniye-saat2.saniye;
	}
	else
	{
		if(saat2.saniye<saat1.saniye)
		{
			saat2.saniye+=60;
			saat2.dakika-=1;
		}
		if(saat2.dakika<saat1.dakika)
		{
			saat2.dakika+=60;
			saat2.saat-=1;
		}
		saatfarki.saat=saat2.saat-saat1.saat;
		saatfarki.dakika=saat2.dakika-saat1.dakika;
		saatfarki.saniye=saat2.saniye-saat1.saniye;
	}
	return saatfarki;
}
int main(int argc, char *argv[]) {
	
	saatBilgileri saat1;
	saatBilgileri saat2;
	saatBilgileri saatfarki;
	printf("Lutfen ilk saat bilgisini saat:dakika:saniye seklinde giriniz.\n");
	scanf("%d%d%lf",&saat1.saat,&saat1.dakika,&saat1.saniye);
	printf("Lutfen ikinci saat bilgisini saat:dakika:saniye seklinde giriniz.\n");
	scanf("%d%d%lf",&saat2.saat,&saat2.dakika,&saat2.saniye);
	
	saatfarki=farkiBul(saat1,saat2);
	printf("Saat Farki=%d saat %d dakika %2lf saniyedir.",saatfarki.saat,saatfarki.dakika,saatfarki.saniye);
	return 0;
}