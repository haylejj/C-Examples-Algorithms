#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int array[5];
	int i,hareket,temp;
	srand(time(NULL));
	printf("Dizi:\n");
	for(i=0;i<5;i++)
	{
		array[i]=rand()%100;
		printf("%d ",array[i]);
	}
	
    for(hareket=0;hareket<4;hareket++)
	{
		for(i=0;i<4-hareket;i++)
		{
			if(array[i]>array[i+1])
			{
				temp=array[i+1];
				array[i+1]=array[i];
				array[i]=temp;
			}
		}
	}
	printf("\nSirali Dizi:\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",array[i]);
	}
    
    
    
    
	return 0;
}