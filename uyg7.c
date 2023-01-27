#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char kitapAdi[20];
	char kitapYazari[20];
	char yayinEvi[20];
	int sayfaSayisi;
}kitapbilgileri;



void kitapEkle(kitapbilgileri *kitaplik,int kitapsayisi)
{
	int i;
	while(1)
	{
		if(i>kitapsayisi)
		{
			puts("Daha fazla kitap eklenmemez.");
		}
		if(kitaplik[i].sayfaSayisi==0)
		{
			printf("kitabin adini giriniz.\n");
			scanf("%s",&kitaplik[i].kitapAdi);
			printf("kitabin yazarini giriniz.\n");
			scanf("%s",&kitaplik[i].kitapYazari);
			printf("kitabin yayinevini giriniz.\n");
			scanf("%s",&kitaplik[i].yayinEvi);
			printf("kitabin sayfa sayisini giriniz.\n");
			scanf("%d",&kitaplik[i].sayfaSayisi);
			return ;
		}
		i++;
	}
}
void kitapGoruntule(kitapbilgileri *kitaplik,int kitapsayisi)
{
	int i;
	for(i=0;i<kitapsayisi;i++)
	{
		printf("Kitabin adi:%s \n Kitabin yazari:%s\n Kitabin yayinevi:%s\n Kitabin Sayfa Sayisi:%d\n",kitaplik[i].kitapAdi,kitaplik[i].kitapYazari,kitaplik[i].yayinEvi,kitaplik[i].sayfaSayisi);
		printf("-------------------------------------\n");
	}
}

int kitapAra(kitapbilgileri *kitaplik,char *kitapadi,int kitapsayisi)
{
	int i=0;
	for(i=0;i<kitapsayisi;i++)
	{
		if(strcmp(kitaplik[i].kitapAdi,kitapadi)==0) 
		{
			return i;
		}
	}
	return -1;
}
int main(int argc, char *argv[]) {
	
	int kitapsayisi;
	kitapbilgileri *kitaplik;
	char kullaniciistegi;
	char kitapadi[20];
	puts("Lutfen kac adet kitap eklemek istediginizi giriniz:");
	scanf("%d",&kitapsayisi);
	
	kitaplik=(kitapbilgileri*)calloc(kitapsayisi,sizeof(kitapbilgileri));
	
	do{
		fflush(stdin);
		puts("Kitap eklemek istiyorsaniz 'E',tum kitaplari goruntulemek istiyorsaniz 'G',arama yapmak istiyorsaniz 'A',cikis yapmak istiyorsaniz 'Q' basiniz.\n");
		kullaniciistegi=getchar();
		switch(kullaniciistegi)
		{
			case 'E':
				kitapEkle(kitaplik,kitapsayisi);
				break;
			
			case 'A':
				puts("Aramak istediginiz kitabin ismi nedir??\n");
				scanf("%s",&kitapadi);
				int kitapIndex=kitapAra(kitaplik,kitapadi,kitapsayisi);
				if(kitapIndex==-1)
				{
					puts("Aradiginiz Kitap bulunamadi!!\n");
				}
				else puts("Aradiginiz kitap bulundu :)\n");
				break;
			case 'G':
				kitapGoruntule(kitaplik,kitapsayisi);
				break;
			case 'Q':
				puts("Cikis yapildi.");
				break;
			default:
				puts("Yanlis bir tuslama yaptiniz.");
				break;
		}
	}while(kullaniciistegi!='Q');

	return 0;
}