#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 
    int x,n,toplam=0,i;
    printf("x gir"); 
	scanf("%d",&x); 
	printf("n gir"); 
	scanf("%d",&n); 
	toplam=toplam+x;
	for(i=2;i<=n;i++)
	{
		int result=faktoriyel(i);
		toplam=toplam+(pow(x,i)/result);
	}
	printf("TOPLAM: %d",toplam);
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
