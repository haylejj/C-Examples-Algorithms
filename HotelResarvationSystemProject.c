#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define odasayisi 100
typedef struct{
	char musteriAdi[15];
	char musteriSoyad[15];
	
}musteriBilgileri;
typedef struct{
	
	int gun,ay,yil;
	
}tarihBilgileri;
typedef struct{
	int kisiSayisi,odaDurumu,odaNumarasi;
	float fiyatBilgisi;
	musteriBilgileri musteri;
	tarihBilgileri girisTarihi,cikisTarihi;
}odaBilgileri;
typedef enum{
	musteri=0,personel
}yetkiSeviyeleri;

int gunFarkiHesapla(tarihBilgileri girisTarihi,tarihBilgileri cikisTarihi)
{
	if(girisTarihi.gun>cikisTarihi.gun)
	{
		cikisTarihi.gun+=30;
		cikisTarihi.ay-=1;
	}
	if(girisTarihi.ay>cikisTarihi.ay)
	{
		cikisTarihi.ay+=12;
		cikisTarihi.yil-=1;
	}
	tarihBilgileri tarihfarki;
	tarihfarki.gun=cikisTarihi.gun-girisTarihi.gun;
	tarihfarki.ay=cikisTarihi.ay-girisTarihi.ay;
	tarihfarki.yil=cikisTarihi.yil-girisTarihi.yil;
	int gunfarki=tarihfarki.yil*365+tarihfarki.ay*30+tarihfarki.gun;
	return gunfarki;
}
void rezarvasyonTemizle(odaBilgileri *odalar,int odanumarasi)
{
	odalar[odanumarasi-1].odaDurumu=0;
	free(odalar[odanumarasi-1].musteri.musteriAdi);
	free(odalar[odanumarasi-1].musteri.musteriSoyad);
	printf("%d numarali odanin cikis islemi tamamlanmistir.\n", odanumarasi);
}
void fiyatBilgisiSorgula()
{
	int kisiSayisi;
	float toplamtutar=0.0;
	tarihBilgileri girisTarihi,cikisTarihi;
	
	printf("Kisi sayisini giriniz.\n");
	scanf("%d",&kisiSayisi);
	printf("Giris tarihizi gun ay yil seklinde yazınız.\n");
	scanf("%d%d%d",&girisTarihi.gun,&girisTarihi.ay,&girisTarihi.yil);
	printf("Cikis tarihizi gun ay yil seklinde yazınız.\n");
	scanf("%d%d%d",&cikisTarihi.gun,&cikisTarihi.ay,&cikisTarihi.yil);
	toplamtutar=gunFarkiHesapla(girisTarihi,cikisTarihi)*100*kisiSayisi;
	printf("Toplam Fiyat:%2f olacaktir.\n",toplamtutar);
}
float fiyatHesaplama(odaBilgileri *odalar,int sorgulanacakoda)
{
	int gunfarki=gunFarkiHesapla( odalar[sorgulanacakoda-1].girisTarihi, odalar[sorgulanacakoda-1].cikisTarihi);
	return gunfarki*100*odalar[sorgulanacakoda-1].kisiSayisi;
}
void musteriEkle(odaBilgileri *odalar)
{
	int sorgulanacakOda;
	char ch;
	printf("Lutfen kayıt olmak istediginiz odayi giriniz.");
	scanf("%d",&sorgulanacakOda);
	if(odalar[sorgulanacakOda-1].odaDurumu!=0)
	{
		 printf("Malesef.Oda %d:%d:%d tarihine kadar doludur.",odalar[sorgulanacakOda-1].cikisTarihi.gun,odalar[sorgulanacakOda-1].cikisTarihi.ay,odalar[sorgulanacakOda-1].cikisTarihi.yil);
		 return;
	}
	odalar[sorgulanacakOda-1].odaNumarasi=sorgulanacakOda;
	printf("Lutfen ad ve soyad bilgilerinizi sirasiyla giriniz.");
	scanf("%s%s",&odalar[sorgulanacakOda-1].musteri.musteriAdi,&odalar[sorgulanacakOda-1].musteri.musteriSoyad);
	printf("Kac kisi odada kalacak??");
	scanf("%d",&odalar[sorgulanacakOda-1].kisiSayisi);
	printf("Giris tarihizi gun ay yil seklinde yazınız.");
	scanf("%d%d%d",&odalar[sorgulanacakOda-1].girisTarihi.gun,&odalar[sorgulanacakOda-1].girisTarihi.ay,&odalar[sorgulanacakOda-1].girisTarihi.yil);
	printf("Cikis tarihizi gun ay yil seklinde yazınız.");
	scanf("%d%d%d",&odalar[sorgulanacakOda-1].cikisTarihi.gun,&odalar[sorgulanacakOda-1].cikisTarihi.ay,&odalar[sorgulanacakOda-1].cikisTarihi.yil);
	odalar[sorgulanacakOda-1].fiyatBilgisi=fiyatHesaplama(odalar,sorgulanacakOda);
	printf("Odemeniz gereken total tutar:%2fTL\n",odalar[sorgulanacakOda-1].fiyatBilgisi);
	printf("Onayliyor musunuz(E-H)\n");
	fflush(stdin);
	ch=getchar();
	if(ch=='H')
	{
		rezarvasyonTemizle(odalar,sorgulanacakOda);
		return;
	}
	printf("Kaydiniz basariyla olusturuldu.\n");
	odalar[sorgulanacakOda-1].odaDurumu=1;
	
}
void odaBilgisiSorgulama(odaBilgileri *odalar,int odanumarasi)
{
	if(odalar[odanumarasi-1].odaDurumu!=0) printf("%d numarali Oda %d-%d-%d tarihine kadar dolu.\n",odanumarasi,odalar[odanumarasi-1].cikisTarihi.gun,odalar[odanumarasi-1].cikisTarihi.ay,odalar[odanumarasi-1].cikisTarihi.yil);
	else printf("%d numarali Oda müsaittir\n",odanumarasi);
}
void odaBilgileriYazdirma(odaBilgileri *odalar)
{
	int i;
	for(i=0;i<odasayisi;i++)
	{
		if(odalar[i].odaDurumu!=0)
		{
			printf("----------------------------------------\n");
			printf("Oda Numarasi:%d\n",odalar[i].odaNumarasi);
			printf("Musteri Adi-Soyadi:%s %s\n",odalar[i].musteri.musteriAdi,odalar[i].musteri.musteriSoyad);
			printf("Kisi Sayisi:%d\n",odalar[i].kisiSayisi);
			printf("Fiyat Bilgisi:%f\n",odalar[i].fiyatBilgisi);
			printf("Giris tarihi:%d-%d-%d\n",odalar[i].girisTarihi.gun,odalar[i].girisTarihi.ay,odalar[i].girisTarihi.yil);
			printf("Cikis tarihi:%d-%d-%d\n\n",odalar[i].cikisTarihi.gun,odalar[i].cikisTarihi.ay,odalar[i].cikisTarihi.yil);
			
			
		}
	}
}
int main(int argc, char *argv[]) {
	int belirlenenSifre=123456;
	int kullaniciGirdigiSifre,cikisOdaNumarasi,sorgulanacakOdaNumarasi;
	char kullaniciGirisi;
	
	yetkiSeviyeleri kullaniciyetki;
	
	odaBilgileri  *odalar;
	odalar=(odaBilgileri*)calloc(odasayisi,sizeof(odaBilgileri));// dinamik dizi
	
	printf("\n\t\t\t\tOtel Rezarvasyon Sistemine Hosgeldiniz...\n");
	
	printf("Lutfen burada calisiyorsaniz sifrenizi giriniz:");
	scanf("%d",&kullaniciGirdigiSifre);
	
	if(belirlenenSifre==kullaniciGirdigiSifre)  kullaniciyetki=personel;
	else  kullaniciyetki=musteri;
	
	do{
		
		printf("1.Yeni Musteri girisi yapmak istiyorsaniz 'E'\n2.Oda bilgisi sorgulamak istiyorsaniz 'S'\n3.Dolu oda bilgilerini goruntulemek istiyorsaniz 'G'\n4.Fiyat sorgusu yapmak istiyorsaniz 'F'\n");
		printf("5.Musteri cikisi gerceklestirmek istiyorsaniz 'C'\n6.Sistemden cikis yapmak istiyorsaniz 'Q'\n");
		fflush(stdin);
		kullaniciGirisi=getchar();
		switch(kullaniciGirisi)
		{
			case 'E':
				if(kullaniciyetki==personel)
				{
					musteriEkle(odalar);
				}
				else printf("Yetkiniz Yeterli Degil.\n\n\n");
				break;
				case 'S':
					printf("Kontrol edilecek oda numarasini giriniz.\n");
					scanf("%d",&sorgulanacakOdaNumarasi);
					odaBilgisiSorgulama(odalar,sorgulanacakOdaNumarasi);
					break;
					case 'G':
						if(kullaniciyetki==personel)
				{
					odaBilgileriYazdirma(odalar);
				}
				else printf("Yetkiniz Yeterli Degil.\n\n\n");
						break;
						case 'F':
							fiyatBilgisiSorgula();
							break;
						    case 'C':
						    	if(kullaniciyetki==personel)
				{
					printf("Cikis yapmak istediginiz odanin numarasini giriniz.\n");
					scanf("%d",&cikisOdaNumarasi);
					rezarvasyonTemizle(odalar,cikisOdaNumarasi);
				}
				else printf("Yetkiniz Yeterli Degil.\n\n\n");
						    	break;
						    	case 'Q':
						    		break;
						    		default:
						    			printf("Hatali tuslama yaptiniz!!!!\n");
						    			break;
							   
		}
	}while(kullaniciGirisi!='Q');
	
	return 0;
}