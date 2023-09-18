#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char dizi[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char ciftLokasyon[]="9Z8Y7X6W5V4U3T2S1R0QPONMLKJIHGFEDCBA";
	char tekLokasyon[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	char dizi2[20];
	char dizi3[20];
	printf("Lutfen dizgiyi giriniz->>>\n");
	gets(dizi2);
	
	int lenght=strlen(dizi);
	int dizgiLenght=strlen(dizi2);
	
	for(int i=0;i<dizgiLenght;i++){
		
		int index=-1;
		for(int j=0;j<lenght;j++){
			if(dizi2[i]==' '){
				dizi3[i]=' ';
				break;
			}
			if(dizi2[i]==dizi[j]){
				index=j;
				break;
			}
			
		}
		if(!(index<0)){
			
			if(i%2==0){
				dizi3[i]=ciftLokasyon[index];
			}
			else{
				dizi3[i]=tekLokasyon[index];
			}
			
		}
		
	}
	dizi3[dizgiLenght] = '\0';
	printf("%s",dizi3);
	
	return 0;
}

