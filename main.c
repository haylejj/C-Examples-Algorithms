#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*
	//1 e üzeri x seri acýlýmý
	int toplam=1,i,fak=1,x,n;
	printf("n degeri giriniz");
	scanf("%d",&n);
	printf("x degeri giriniz");
	scanf("%d",&x);
	
	for(i=1;i<n+1;i++)
	{
		fak=fak*i;
		toplam=toplam+(x^i)/fak;
	}
	
	printf("%d",toplam);
	
	
	//2  58.soru
	
	
	int i=1,n,x,fak=1,top=0; 
	printf("x gir"); 
	scanf("%d",&x); 
	printf("n gir"); 
	scanf("%d",&n); 
	top=top+x; 
	while(i!=n) 
	{ 
	top=top+(pow(x,i)/fak); 
	i++;
	} 
	printf("TOPLAM: %d",top);
	*/
	//3 60.soru
	float top=1;
	int fak=1,x,j,k,i;
	printf("x gir ->>\n");
	scanf("%d",&x);
	printf("k gir ->>\n");
	scanf("%d",&k);
	
    for(i=1;k-1;i++)
	{
	    fak=1;
		for(j=1;2*i;i++)
		{
			fak=fak*j;
			top=top+pow(-1,i)*pow(x,(2*i))/fak;
		}
	}
	printf("%f",top);
	
	
	return 0;
}
