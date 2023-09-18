#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ROT13(char [], char [], int);

int main(int argc, char *argv[]) {
		
	char dizgi1[20];
	char dizgi2[20];
	printf("Lütfen þifrelenecek dizgiyi giriniz.->>\n");
	gets(dizgi1);
	int length=strlen(dizgi1);
	
	ROT13(dizgi1,dizgi2,length);
	
	return 0;
}

void ROT13(char giris[], char cikis[], int karaktersayisi){
	char girisAlfabe[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cikisAlfabe[]="NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	int lengthAlfabe=strlen(girisAlfabe);
	
	for(int i=0;i<karaktersayisi;i++){
		
		int index=-1;
		for(int j=0;j<lengthAlfabe;j++){
			if(giris[i]==girisAlfabe[j]){
				index=j;
					break;
			}
		}
		if(!(index<0)){
			cikis[i]=cikisAlfabe[index];
		}	
	}
	cikis[karaktersayisi] = '\0';
	printf("%s",cikis);
	
}	