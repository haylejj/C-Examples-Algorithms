#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
	char sembol[3];
	char tamAdi[20];
	int atomNumarasi;
}element;
void bilgileriGoster(element elementListesi[] , char sembol[] , int elementSayisi)
{
	int i;
	int bulunduMu=0;
	for(i=0;i<elementSayisi;i++)
	{
		if(strcmp(elementListesi[i].sembol,sembol)==0)
		{
			printf("Sembol:%s\n",elementListesi[i].sembol);
			printf("Tam Adi:%s\n",elementListesi[i].tamAdi);
			printf("Atom Numarasi:%d\n",elementListesi[i].atomNumarasi);
			bulunduMu=1;
			break;
		}
	}
	if(bulunduMu==0)
	{
		printf("Aradaginiz element bulunamadi.");
	}
}
int main(int argc, char *argv[]) {
	
	element elementListesi[]={ {"H","Hidrojen",1},{"He","Helyum",2},{"B","Bor",5},{"F","Flor",9},{"N","Azot",7} };
	
	char kullaniciArama[5];
	char a[][20]={"ahmet","mehmet","ca","dad","efrf"};
	for(int i=0;i<5;i++)
	{
		printf("%s\n",a[i]);
	}
	
	while(1)
	{
		printf("Aramak yazdirmak istediginiz elementin sembolunu giriniz.Cikis icin Q tuslayiniz.");
		scanf("%s",&kullaniciArama);
		if(strcmp(kullaniciArama,"Q")==0)
		{
			break;
		}
		bilgileriGoster(elementListesi,kullaniciArama,5);
	}
	
	return 0;
}