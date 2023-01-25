#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//PALENDOM CONTROL
	char array[100];
	char *pbas,*pson;
	int kontrol=1;
	printf("Lutfen bir cumle giriniz.");
    gets(array); 
    for(pson=array;*pson;pson++);
    pson--;
    for(pbas=array;pbas<pson;pbas++,pson--)
	{
		if(*pbas != *pson)
		{
			kontrol=0;
		}
	}
	if(kontrol==1)
	{
		printf("%s bir palendomdur.",array);
	}
	else
	{
		printf("%s bir palendom degil.",array);
	}
    
    
	return 0;
}