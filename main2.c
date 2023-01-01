#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void diziyiDoldur(int *array,int elemansayisi)
{
	srand(time(NULL));
	for(int i=0;i<elemansayisi;i++)
	{
		array[i]=rand()%100;
	}
}
void diziyiYazdir(int *array,int elemansayisi)
{
	for(int i=0;i<elemansayisi;i++)
	{
		printf(" %d ",array[i]);
	}
}
void maxMinBul(int *array,int elemansayisi,int *max,int *min)
{
	*max=*array;
	*min=*array;
	
	for(int i=0;i<elemansayisi;i++)
	{
		if(array[i]>*max)
		{
			*max=array[i];
			
		}
		else if(*min>array[i])
		{
			*min=array[i];
		}
	}
}
void topOrtHesaplama(int *array,int elemansayisi,int *ort,int *top)
{
	for(int i=0;i<elemansayisi;i++)
	{
		*top+=array[i];
	}
	*ort=*top/elemansayisi;
}
int main(int argc, char *argv[]) {
	
	int array[10];
	int max,min,top,ort;
	diziyiDoldur(array,10);
	diziyiYazdir(array,10);
	maxMinBul(array,10,&max,&min);
	printf("Dizinin max %d   min %d",max,min);
	topOrtHesaplama(array,10,&ort,&top);
	printf("Dizinin toplami %d   ortalamasi %d",top,ort);
	return 0;
}

