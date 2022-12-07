#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int yil1,yil2,ay1,ay2,gun1,gun2;
	printf("Sirasiyla Bugunun Yil - Ay - Gun degerlerini giriniz.->>>>\n");
	scanf("%d%d%d",&yil1,&ay1,&gun1);
	printf("Dogum gununuzu sirasiyla Yil - Ay - Gun degerlerini giriniz.->>>\n");
	scanf("%d%d%d",&yil2,&ay2,&gun2);
	
	if(gun1<gun2)
	{
	gun1=gun1+30;
	ay1=ay1-1;	
	}
	if(ay1<ay2)
	{
	ay1=ay1+12;
	yil1=yil1-1;
	}
	printf("%d yil %d ay %d gundur yasiyorsunuz.",yil1-yil2,ay1-ay2,gun1-gun2);
}
