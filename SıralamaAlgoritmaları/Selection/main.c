#include <stdio.h>
#include <stdlib.h>

void selectionSort(int,int[10]);

int main(void) {
	
	int array[]={10,5,8,9,1,7,2,4,12,3};
	selectionSort(10,&array);
	for(int i=0;i<10;i++)
	printf("%d ",array[i]);
	return 0;
}
void selectionSort(int n,int array[10]){
	int index,enkucuk;
	for(int i=0;i<n-1;i++){
		enkucuk=array[n-1];
		index=n-1;
		for(int j=i;j<n-1;j++){
			if(array[j]<enkucuk){
				enkucuk=array[j];
				index=j;
			}
		}
		array[index]=array[i];
		array[i]=enkucuk;
	}
}