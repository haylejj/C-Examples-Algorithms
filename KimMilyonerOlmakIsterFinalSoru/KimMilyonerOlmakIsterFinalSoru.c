#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "turkish");
	char cities[][20] = {
        "Adana", "Adýyaman", "Afyonkarahisar", "Aðrý", "Amasya", "Ankara", "Antalya", "Artvin", "Aydýn", "Balýkesir",
        "Bilecik", "Bingöl", "Bitlis", "Bolu", "Burdur", "Bursa", "Çanakkale", "Çankýrý", "Çorum", "Denizli",
        "Diyarbakýr", "Edirne", "Elazýð", "Erzincan", "Erzurum", "Eskiþehir", "Gaziantep", "Giresun", "Gümüþhane", "Hakkari",
        "Hatay", "Isparta", "Mersin", "Ýstanbul", "Ýzmir", "Kars", "Kastamonu", "Kayseri", "Kýrklareli", "Kýrþehir",
        "Kocaeli", "Konya", "Kütahya", "Malatya", "Manisa", "Kahramanmaraþ", "Mardin", "Muðla", "Muþ", "Nevþehir",
        "Niðde", "Ordu", "Rize", "Sakarya", "Samsun", "Siirt", "Sinop", "Sivas", "Tekirdað", "Tokat",
        "Trabzon", "Tunceli", "Þanlýurfa", "Uþak", "Van", "Yozgat", "Zonguldak", "Aksaray", "Bayburt", "Karaman",
        "Kýrýkkale", "Batman", "Þýrnak", "Bartýn", "Ardahan", "Iðdýr", "Yalova", "Karabük", "Kilis", "Osmaniye", "Düzce"
    };
	
	int cityCount=sizeof(cities)/sizeof(cities[0]);
	
	int sCount=0,vCount=0,gCount=0,hCount=0;
	
	for(int i=0;i<cityCount;i++){
		
		for(int j=0;cities[i][j]!='\0';j++){
			cities[i][j]=tolower(cities[i][j]);
			if(cities[i][j]=='þ') sCount++;
			if(cities[i][j]=='v') vCount++;
			if(cities[i][j]=='g') gCount++;
			if(cities[i][j]=='h') hCount++;
		}
	}
	printf("þ harfi sayisi:%d\n v harfi sayisi:%d\n g harfi sayisi:%d\n h harfi sayisi:%d\n",sCount,vCount,gCount,hCount);
	
	return 0;
}