#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x;
	int y;
}nokta;
typedef struct{
	nokta koordinat[4];
}dikdortgen;

float alanHesapla(dikdortgen hesaplanacakDikdortgen)
{
	int xkenar=hesaplanacakDikdortgen.koordinat[1].x-hesaplanacakDikdortgen.koordinat[0].x;
	int ykenar=hesaplanacakDikdortgen.koordinat[3].y-hesaplanacakDikdortgen.koordinat[1].y;
	return xkenar*ykenar;
}
int main(int argc, char *argv[]) {
	
	dikdortgen hesaplanacakDikdortgen;
    int i=0;
    for(i=0;i<4;i++)
	{
		printf("Lutfen N%d koordinati icin sirasiyla x ve y degerlerini giriniz.",i);
		scanf("%d%d",&hesaplanacakDikdortgen.koordinat[i].x,&hesaplanacakDikdortgen.koordinat[i].y);
	}
	float result=alanHesapla(hesaplanacakDikdortgen);
	printf("Girdiginiz koordinatlardan olusan dikdortgenin alani :%2f",result);
	
	return 0;
}