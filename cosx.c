#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float toplam=0;
	int x,n,i;
	printf("x gir"); scanf("%d",&x);
	printf("n gir"); scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		toplam=toplam+(((pow(-1,i))*(pow(x,2*i)))/faktoriyel(2*i));		
	}
	
	
		
	
	
	printf("%f",toplam);
	return 0;
}
int faktoriyel(int k)
{
	int fak=1,i;
	for(i=1;i<=k;i++)
	{
		fak*=i;
	}
	return fak;
}
