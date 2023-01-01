#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	//fibonacci ilk 10 terimi bulma dizi ile
	int array[10];
	array[0]=1;
	array[1]=1;
	int i;
	printf("%d\n%d",array[0],array[1]);
	for(i=2;i<10;i++)
	{
		array[i]=array[i-1]+array[i-2];
		printf("\n%d ",array[i]);
	}
	
	// girilen bir kelimenin uzunluğunu bulma
	char array[100];
	int i=0;
	puts("Kelimeyi giriniz.");
	gets(array);
	while(array[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
	
	//bir sayı dizisinin en büyük elemanını bulan
	int array[5];
	int enBuyuk;
	enBuyuk=array[0];
	for(int i=0;i<5;i++)
	{
		printf("Sayi giriniz.");
		scanf("%d",&array[i]);
    }
    for(int i=1;i<5;i++)
	{
		if(array[i]>enBuyuk)
		{
			enBuyuk=array[i];
		}
    }
    printf("%d en buyuk.",enBuyuk);
    //Girilen kelimeyi tersten yazma
    
    char array[100];
    int i;
	puts("Kelime Giriniz.");
    gets(array);
    
    for(i=0;array[i]!='\0';i++)
    i++;
    while(i>-1)
	{
		printf(" %c",array[i]);
		i--;
	}
    
    //bir decimal sayiyi binary cevirme
    int sayi,array[10],i;
    printf("sayi giriniz.");
    scanf("%d",&sayi);
    for(i=0;i<10;i++)
	{
		array[i]=sayi%2;
		sayi=sayi/2;
		if(sayi<2)
		{
			i++;
			array[i]=sayi;
			break;
		}
	}
	while(i>-1)
	{
		printf("%d",array[i]);
		i--;
	}
    
    
    char array[10]="bilgisayar";
    int i,j=0,k=1;
    for(i=0;i<10;i++)
	{
		printf(" %c",array[i]);
		j++;
		i=j;
		while(i<10)
		{
			if(k<j)
			{
				printf("%c",array[k]);
				k++;
			}
			else 
			k=0;
		}
	}
	
	-71
	int array[50];
	srand(time(NULL));
	int sayac=0;
	for(int i=0;i<50;i++)
	{
		array[i]=rand()%100;
		printf("%d\n",array[i]);
		if(array[i]>=50)
		sayac++;
	}
	printf("\n%d kisi basarili.",sayac);
	*/
	//-72 10 elemanlı bir sayı dizisinin ortalaması bir tamsayi ise bu sayıdan diziden kaç tane oldugunu veren
	int array[10];
	int i,top=0,ort,sayac=0;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		array[i]=rand()%10;
		printf(" %d",array[i]);
		top+=array[i];
	}
	ort=top/10;
	if(top%10==0)
	{
		for(i=0;i<10;i++)
	   {
		if(array[i]==ort)
		sayac++;
	   }
	   printf("\nOrtalama tam sayidir.");
	   printf("\n%d tane vardir.",sayac);
	}
	else printf("\nOrtalama tam sayi degil.");
	
    return 0;
}