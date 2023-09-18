#include <stdio.h>
#include <stdlib.h>

insertionSort(int,int[10]);
int main(int argc, char *argv[]) {
	int array[]={10,5,8,9,1,7,2,4,12,3};
	
	insertionSort(10,&array);
	for(int i=0;i<10;i++)
	printf("%d ",array[i]);
	
	
	return 0;
}
insertionSort(int n,int array[10]){
	
	int ekle,i,j;
	for(i=1;i<n;i++){
		ekle=array[i];
		for(j=i-1; j>=0 && array[j]>=ekle;j--){
			array[j+1]=array[j];
		}
		array[j+1]=ekle;
	}
	
}