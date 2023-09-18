#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	
	char array[20];
	printf("Lutfen bir karakter dizgisi giriniz.\n");
	scanf("%s",&array);
	
	printf("Kelimenin Ascii Karsiligi\n\n");
	int lenght=strlen(array);
	for(int i=0;i<lenght;i++){
		printf("\n%c harfin ascii karsiligi:->> %d \n",array[i],(int)array[i]);
	}

	return 0;
}