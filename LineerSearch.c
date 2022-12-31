#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int array[10],i,arananDeger,bulunduMu=0;
	srand(time(NULL));
	printf("\nAranacak degeri giriniz.->>>>>> ");
    scanf("%d",&arananDeger);
	for(i=0;i<10;i++)
	{
		array[i]=rand()%10;
		printf("%d ",array[i]);
	}
	
    
    for(i<0;i<10;i++)
	{
		if(array[i]==arananDeger)
		{
			bulunduMu=1;
			
		}
	}
	if(bulunduMu==1)
	{
		printf("Aranan deger bulundu.");
	}
	else {
		printf("\nBulunamadi.");
	}
	
	
	return 0;
}