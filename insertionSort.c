#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int array[5];
	int i,j,eleman;
	srand(time(NULL));
	printf("Dizi:\n");
	for(i=0;i<5;i++)
	{
		array[i]=rand()%10;
		printf("%d\t",array[i]);
	}
	printf("Sirali Dizi\n");
	
	for(i=1;i<5;i++)
	{
		eleman=array[i];
		for(j=i-1;j>=0 && array[j]>eleman;j--)
		{
			array[j+1]=array[j];
		}
		array[j+1]=eleman;
	}
	
	for(i=0;i<5;i++)
	{
	     printf("%d\t",array[i]);
	}
	
	return 0;
}