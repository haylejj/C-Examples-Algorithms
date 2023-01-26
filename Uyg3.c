#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int id;
	double fiyatBilgisi;
	char adi[20];
}urunBilgileri;
void listeyeUrunEkle(urunBilgileri urunListesi[],int id,double fiyat,char ad[])
{
	int i=0;
	while(1)
	{
		if(urunListesi[i].id==0)
		{
			urunListesi[i].id=id;
			urunListesi[i].fiyatBilgisi=fiyat;
			strcpy(urunListesi[i].adi,ad);
			break;
		}
		i++;
	}
}
int urunBul(int arananID,urunBilgileri urunlerListesi[],int urunSayisi)
{
	int i;
	for(i=0;i<urunSayisi;i++)
	{
		if(urunlerListesi[i].id==arananID)
		{
			return i;
		}
	}
	return -1;
}
void urunBilgisiGoster(int arananid,urunBilgileri UrunlerListesi[],int urunSayisi)
{
	int result=urunBul(arananid,UrunlerListesi,urunSayisi);
	if(result!=-1)
	{
		printf("id:%d\n",UrunlerListesi[result].id);
		printf("fiyat:%2lf\n",UrunlerListesi[result].fiyatBilgisi);
		printf("adi:%s\n",UrunlerListesi[result].adi);
		
	}
	else printf("Aradiginiz urun kayitli degil.");
}
int main(int argc, char *argv[]) {
	
	int urunSayisi,id,arananid;
	double fiyatBilgisi;
	char adi[20];
	puts("Kac urun gireceksiniz??");
	scanf("%d",&urunSayisi);
	urunBilgileri urunlerListesi[urunSayisi];
	
	for(int i=0;i<urunSayisi;i++)
	{
		puts("Lutfen eklenecek urunun Id bilgisini giriniz.");
		scanf("%d",&id);
		puts("Lutfen eklenecek urunun fiyat bilgisini giriniz.");
		scanf("%lf",&fiyatBilgisi);
		puts("Lutfen eklenecek urunun ad bilgisini giriniz.");
		scanf("%s",&adi);
		
		listeyeUrunEkle(urunlerListesi,id,fiyatBilgisi,adi);
	}
	printf("Lutfen gormek istediginiz urunun id bilgisini giriniz.");
	scanf("%d",&arananid);
	urunBilgisiGoster(arananid,urunlerListesi,urunSayisi);
	
	return 0;
}