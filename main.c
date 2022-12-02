#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int main(int argc, char *argv[]) {
	
	/*
	//1 kullanýcýnýn girdiði iki sayýnýn karelerinin toplamý
	int number1,number2,result=0;
	printf("input number1 \n");
	scanf("%d",&number1);
	printf("input number2 \n");
	scanf("%d",&number2);
	result=pow(number1,2)+pow(number2,2);
	printf("%d",result);
	
	
	//2 1 den 100 e kadar sayýlarýn küplerinin toplamý
	int sayi1=1;
	int toplam=0;
	
	for(sayi1=1;sayi1<101;sayi1++){
		toplam=toplam+sayi1*sayi1*sayi1;
	}
	printf("%d",toplam);
	
	
	//3 Girilen sayinin faktoriyelini bulma
	int i,n,fak=1;
	printf("N degerini giriniz.\n");
	scanf("%d",&n);
	for(i=n;i>1;i--){
		fak=fak*i;
	}
	printf("%d",fak);
	
	
	//4	girilen sayýnýn kaç basamaklý oldugunu bulma
	int basamak=1;
	float sayi;
	printf("Sayiyi giriniz ->>>\n");
	scanf("%f",&sayi);
	do{
		sayi=sayi/10;
		basamak++;
	}while(sayi>=9);
	
	printf("Sayi %d basamakli.",basamak);
	
	
	//5 girilen 20 sayýnýn çift sayýlarýn toplamýnýn tek sayýlarýn toplamýna oraný
	int i,sayi,tek=0,cift=0;
	float oran;
	
	for(i=1;i<=20;i++){
		printf("Sayi giriniz ->>>>");
		scanf("%d",&sayi);
		if(sayi%2==0){
			cift=cift+sayi;
		}
		else{
			tek=tek+sayi;
		}
	}
	
	oran=cift/tek;
	printf("Oran : %f",oran);
	
	
	
	//6 mükemmel sayý mý ? kendisine tam bolenlerin toplamý kendisine eþit mi ?
	
	int i,sayi,toplam=0;
	printf("Sayi gir.\n");
	scanf("%d",&sayi);
	for(i=1;i<sayi;i++){
		if(sayi%i==0) toplam=toplam+i;
	}
	
		
	
	if(toplam==sayi)
	{
		printf("Mukemmel sayidir.");
	}
	else printf("Mukemmel sayý degildir.");
	
	
	//7 1-100 arasýndaki çift sayýlarýn toplamý mükemmel sayý mý =?
	
	int j,i,toplam,muk=0;
	for(i=0;i<=100;i++){
		if(i%2==0){
			toplam=toplam+i;
		}
	}
	
	for(j=0;j<toplam;j++){
		if(toplam%i==0) muk=muk+i; 
	}
	
	if(muk==toplam) printf("Mukemmel sayidir.");
	else printf("%d sayisi Mukemmel sayi degildir.",toplam);
	
	
	
	//8 klavyeden girilen sayýlar arasýnda istenilen sayýyý max 6 seferde bulan program
	int alt,ust,tahmin,sayi,sayac=0;
	printf("Sayiyi giriniz.");
	scanf("%d",&sayi);
	
	while(sayac<6 && tahmin!=sayi){
		printf("Tahmin giriniz.");
		scanf("%d",tahmin);
		
		
		
			
			if(tahmin<sayi) {
				printf("Sayý tahminini buyutun.");
			}
			
			else if(tahmin>sayi) {
				printf("Sayi tahminini kucultun");
			}
		
		sayac++;
		
	}
	
	printf("Tebrikler.Sayýyý %d . hakkýnýzda buldunuz!!!",sayac);
	
	
	
	*/
	//9 decimal to binary
	int i,sayi;
	int a[10];
	printf("Sayiyi giriniz.");
	scanf("%d",&sayi);
	for(i=0;sayi>0;i++){
		a[i]=sayi%2;
		sayi=sayi/2;
	}
	for(i=i-1;i>=0;i--)    
    {    
     printf("%d",a[i]);    
    }    
	
	
	
	
	return 0;
}
