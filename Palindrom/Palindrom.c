#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int main(int argc, char *argv[]) {
	
	char dizgi[20];
	printf("Lütfen bir dizgi giriniz.->>>\n");
	gets(dizgi);
	int length=strlen(dizgi);
	int isPalindrom=1;
	
	for(int i=0;i<length/2 && isPalindrom==1 ;i++ ){
		if(dizgi[i] != dizgi[length-i-1])
		isPalindrom=0;
	}
	if(isPalindrom==1) printf("%s palindromdur.\n",dizgi);
	else printf("%s palindrom degildir.\n",dizgi);
	
	return 0;
}
