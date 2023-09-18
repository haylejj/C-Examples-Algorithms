#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double lnHesapla(double);

int main(void) {
	double sayi;
	do{
		printf("Lutfen bir deger giriniz.->>>\n");
		scanf("%lf",&sayi);
		
	}while((sayi<0) || (sayi>=2));
	
	double deger=sayi-1;
	 if (!(deger > -1 && deger < 1)) 
        printf("\nX deðeri -1 ile 1 arasýnda olmak zorundadýr!\n");
     else 
        printf("\nln(%lf) sonucu: %lf\n", sayi, lnHesapla(deger));
    
	
	
	return 0;
}
double lnHesapla(double deger){	
	double toplam=0;	
	for(int i=1;i<=5;i++){
		toplam+=(pow(-1,i-1))*pow(deger,i)/i;
	}
	return toplam;
}