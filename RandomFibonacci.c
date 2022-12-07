#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int rfHesapla(int,int,float);
int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	int i,N;
	float rastgeleSayi;
	printf("Rastgele Fibonacci sayý dizisinin kac elemanini hesaplamak istersiniz =>>>>"); scanf("%d",&N);
	int f[N];
    f[0]=1;f[1]=1;	
    printf("Rastgele fibonacci dizininin rastgele sayisi yok %d\n",f[0]);
    printf("Rastgele fibonacci dizininin rastgele sayisi yok %d\n",f[1]);
	for(i=2;i<N;i++)
	{
		rastgeleSayi=(float)rand()/RAND_MAX;
		f[i]=rfHesapla(f[i-1],f[i-2],rastgeleSayi);
		printf("Rastgele fibonacci dizininin rastgele sayisi %f ,  %d    %d\n",rastgeleSayi,f[i-1],f[i-2]);
	}
	
	return 0;
}
int rfHesapla(int fn1,int fn2,float rastgeleSayi)
{
	if(rastgeleSayi<0.5) 
	return (fn1+fn2);
	else 
	return (fn1-fn2);
}
