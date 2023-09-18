#include <stdio.h>
#include <stdlib.h>

 double sinhesapla(double);
 int faktoriyel(int);
int main(void) {
	
	double x;
	do{
		printf("Lutfen x degerini giriniz.->>>\n");
		scanf("%lf",&x);
	}while((x>3.14001)||(x<-3.14001));
	double toplam=sinhesapla(x);
	printf("\n %lf acisinin degeri :%lf\n",x,toplam);
	
	return 0;
}
int faktoriyel(int sayi){
	int f=1;
	for(int i=2;i<=sayi;i++){
		f*=i;
	}
	return(f);
}
double sinhesapla(double x){
	double result=0;
	for(int i=0;i<5;i++){
		result+=pow(-1,i)*pow(x,2*i+1)/faktoriyel(2*i+1);
	}
	return(result);
}