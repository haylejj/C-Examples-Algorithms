#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bubbleSort(int,int[10]);

int main(int argc, char *argv[]) {
	int alt,ust;
	printf("Random sayi için alt ve ust aralik verir misiniz ??\n");
	scanf("%d%d",&alt,&ust);
	int array[10];
	srand(time(NULL));
	for(int i=0;i<10;i++){
		
		
		int sayi=rand()%(ust-alt+1)+alt;
		array[i]=sayi;
	}
	bubbleSort(10,&array);
	
	for(int i=0;i<10;i++)	
		printf("%d ",array[i]);
	
	return 0;
}
void bubbleSort(int n,int array[10]){
	
	int k,hareket,temp;
	for(hareket=0;hareket<n-1;hareket++){
		for(k=0;k<n-1-hareket;k++){
			if(array[k]>array[k+1]){
				temp=array[k+1];
				array[k+1]=array[k];
				array[k]=temp;
			}
		}
	}
}