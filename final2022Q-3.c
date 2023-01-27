#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	float a,b,c,kok1,kok2;
	
}Denklem;

void kokHesapla(Denklem *denklem)
{
	int i;
	float delta;
	for(i=0;i<5;i++)
	{
		delta=(denklem[i].b*denklem[i].b)-4*denklem[i].a*denklem[i].c;
		if(delta<0)
		{
			denklem[i].kok1='\0';
			denklem[i].kok2='\0';
		}
		else
		{
			denklem[i].kok1=-(denklem[i].b)+sqrt(delta)/(2*denklem[i].a);
			denklem[i].kok2=-(denklem[i].b)-sqrt(delta)/(2*denklem[i].a);
		}
	}
}

int main(int argc, char *argv[]) {
	Denklem denklem[5];
	int i;
	for(i=0;i<5;i++)
	{
        printf("%d. denklemin a, b ve c katsayilarini giriniz -> ",i+1);
        scanf("%f%f%f",&denklem[i].a,&denklem[i].b,&denklem[i].c);
	}
    kokHesapla(denklem);
    
    for(i=0;i<5;i++)
        printf("%d: %5.2f x2 + %5.2f x + %5.2f = 0 denkleminin kokleri kok1 = %5.2f ve kok2 = %5.2f\n\n",i+1,denklem[i].a,denklem[i].b,denklem[i].c,denklem[i].kok1,denklem[i].kok2);
        
	return 0;
}