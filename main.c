#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>



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
	
	
	
	//10 girilen 4 basamaklý sayýnýn ilk 2 basamagýnýn karesi ile son 2 basamagýnýn karesi toplamý sayýya eþit ise orjinal sayý
	int sayi,ilk2,son2;
	printf("Sayiyi giriniz.");
	scanf("%d",&sayi);
	ilk2=sayi/100;
	son2=sayi%100;
	//printf("%d\n",ilk2);
	//printf("%d\n",son2);
	if(pow(ilk2,2)+pow(son2,2)==sayi) printf("%d sayisi orjinal sayýdýr.",sayi);
	else printf("%d sayisi orjinal sayý degildir.",sayi);
	
	
	// 11 girilen 4 basamaklý saynýn basamaklarýndaki sayýlarý tahmin etme
	int sayi,birler,onlar,yuzler,binler;
	printf("Sayiyi giriniz.");
	scanf("%d",&sayi);
	binler=sayi/1000;
	yuzler=(sayi%1000)/100;
	onlar=(sayi%100)/10;
	birler=sayi-(binler*1000)-(yuzler*100)-(onlar*10);
	printf("Binler:%d",binler);
	printf("Yuzler:%d",yuzler);
	printf("Onlar:%d",onlar);
	printf("Birler:%d",birler);
	
	
	// 12 sayi bulmaca oyunu hak=10
	int tahmin,sayac=0;
	int sayi=rand()%1000;
	while(sayac!=10){
		printf("Tahmin gir.");
		scanf("%d",&tahmin);
		sayac++;
		if(tahmin==sayi){
			printf("Tebrikler %d kerede sayiyi bildiniz.",sayac);
			break;
		}
		else{
			if(tahmin<sayi) printf("Tahmini yukselt\n");
		    else if (tahmin>sayi) printf("Tahmini dusur\n");
		}
		printf("Kalan tahmi hakkiniz : %d\n",10-sayac);
		
		
	}
	
	
	// 13 girilen sayýnýn yaklaþýk olarak karakok hesaplama
	int i=1,a,b,sayi;
	printf("Sayiyi giriniz.");
	scanf("%d",&sayi);
	for(i=1;i<sayi;i++){
		if((i*i)>sayi)
	}
	
	
	//14 kok hesaplama
	int a,b,c,x,y,delta=0;
	printf("a giriniz\n");
	scanf("%d",&a);
	printf("b giriniz\n");
	scanf("%d",&b);
	printf("c giriniz\n");
	scanf("%d",&c);
	delta=(b*b)-(4*a*c);
	if(delta==0){
		x=(-b)/(2*a);
		printf("Tek kok vardýr ve o da %d dir",x);
	}
	else if(delta<0)
		printf("Reel Kok yoktur.");
	else {
		x=(-b-(sqrt(delta)/2*a));
		y=(-b+(sqrt(delta)/2*a));
		printf("iki kok vardir 1:%d  ---- 2:%d",x,y);
	}
	
	
	// 15 1 ile 100 arasýnda kac asal sayý var
	int sayi=8,asal=4;
	while(sayi<100){
		if((sayi%2)!=0)
		{
			if((sayi%3)!=0)
			{
				if((sayi%5)!=0)
				{
					if((sayi%7)!=0) asal++;
				}
			}
		}
		sayi++;
	}
	printf("Asal sayý adedi %d",asal);
	
	
    // 16 smith sayýsý olup olmadýgýný bulma
    
    
    int toplam1=0,sayi,i,toplam2=0,x,y;
    printf("Sayi gir");
    scanf("%d",&sayi);
    x=sayi;
    while(sayi>10)
	{
    	toplam1=toplam1+(sayi%10);
    	sayi=sayi/10;
	}
	toplam1=toplam1+sayi;
	while(x>1)
	{
		if((x%i)==0)
		{
			if(i==2 || i==3 || i==5 || i==7)
          {
            toplam2=toplam2+i;
             x=x/i;
          }
          else
		  {
		  	y=i;
		  	while(y>10)
			  {
			  	toplam2=toplam2+y%10;
			  	y=y/10;
			  }
			  toplam2=toplam2+y;
			  x=x/i;
		  }
		}
	}
	
	if(toplam1==toplam2) printf("%d sayisi smith sayisidir.!!\n",sayi);
	
	else printf("%d sayisi smith sayisi degildir.!!\n",sayi);
	
	*/
	
	
	//17 soru 55
	int enb,enk,i,top,a;
	float b,ort,fark;
	scanf("%d",&a);
	enk=a;
	enb=a;
	
	
	while(i<9)
	{
		printf("Sayi giriniz.\n");
		scanf("%d",&a);
		if(a<enk) enk=a;
		else if (a>enb) enb=b;
		top=top+a;
		i++;
	}
	b=(enb+enk)/2;
	ort=top/10;
	fark=ort-b;
	printf("%f",fark);
	
	
	
	
	
	
	
	
	return 0;
}
 

