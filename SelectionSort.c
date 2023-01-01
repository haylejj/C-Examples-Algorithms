#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int array[10];
	int i,j,index,enKucuk;
	srand(time(NULL));
	printf("Siralanmamis Dizi:\n");
	for(i=0;i<10;i++)
	{
		array[i]=rand()%100;
		printf("%d ",array[i]);
	}
	
	for(i=0;i<9;i++)
	{
		enKucuk=array[9];
		index=9;
		for(j=i;j<9;j++)
		{
			if(array[j]<enKucuk)
			{
				enKucuk=array[j];
				index=j;
			}
	    } 
	    array[index]=array[i];
	    array[i]=enKucuk;
    }
    printf("\nSiralanmis Dizi:\n");
    for(i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}