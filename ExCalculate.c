#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
   int toplam=1,i,x,n;
   printf("x input\n"); scanf("%d",&x);
   printf("n input\n"); scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   {
   	 int result=faktoriyel(i);
   	 toplam=toplam+(x^i)/result;
   }
   printf("%d",toplam);
    
	return 0;
}
int faktoriyel(int k){
	int i,fak=1;
	for(i=1;i<=k;i++)
	{
		fak=fak*i;
	}
	return fak;
}
