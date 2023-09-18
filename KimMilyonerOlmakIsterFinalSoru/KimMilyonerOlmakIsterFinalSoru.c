#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "turkish");
	char cities[][20] = {
        "Adana", "Ad�yaman", "Afyonkarahisar", "A�r�", "Amasya", "Ankara", "Antalya", "Artvin", "Ayd�n", "Bal�kesir",
        "Bilecik", "Bing�l", "Bitlis", "Bolu", "Burdur", "Bursa", "�anakkale", "�ank�r�", "�orum", "Denizli",
        "Diyarbak�r", "Edirne", "Elaz��", "Erzincan", "Erzurum", "Eski�ehir", "Gaziantep", "Giresun", "G�m��hane", "Hakkari",
        "Hatay", "Isparta", "Mersin", "�stanbul", "�zmir", "Kars", "Kastamonu", "Kayseri", "K�rklareli", "K�r�ehir",
        "Kocaeli", "Konya", "K�tahya", "Malatya", "Manisa", "Kahramanmara�", "Mardin", "Mu�la", "Mu�", "Nev�ehir",
        "Ni�de", "Ordu", "Rize", "Sakarya", "Samsun", "Siirt", "Sinop", "Sivas", "Tekirda�", "Tokat",
        "Trabzon", "Tunceli", "�anl�urfa", "U�ak", "Van", "Yozgat", "Zonguldak", "Aksaray", "Bayburt", "Karaman",
        "K�r�kkale", "Batman", "��rnak", "Bart�n", "Ardahan", "I�d�r", "Yalova", "Karab�k", "Kilis", "Osmaniye", "D�zce"
    };
	
	int cityCount=sizeof(cities)/sizeof(cities[0]);
	
	int sCount=0,vCount=0,gCount=0,hCount=0;
	
	for(int i=0;i<cityCount;i++){
		
		for(int j=0;cities[i][j]!='\0';j++){
			cities[i][j]=tolower(cities[i][j]);
			if(cities[i][j]=='�') sCount++;
			if(cities[i][j]=='v') vCount++;
			if(cities[i][j]=='g') gCount++;
			if(cities[i][j]=='h') hCount++;
		}
	}
	printf("� harfi sayisi:%d\n v harfi sayisi:%d\n g harfi sayisi:%d\n h harfi sayisi:%d\n",sCount,vCount,gCount,hCount);
	
	return 0;
}