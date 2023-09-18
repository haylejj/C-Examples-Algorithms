#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int faktoriyel(int);
double hesapla(double);

int main(void) {
    double x;
    printf("Lutfen bir radyant degeri giriniz.->>>\n");
    scanf("%lf", &x);
    printf("%lf radyanlik acinin sinusu %lf dir.\n", x, hesapla(x));
    return 0;
}

double hesapla(double x) {
    double toplam = 0;
    for (int i = 0; i <5; i++) {
        toplam += pow(-1, i) * pow(x, (2*i)+ 1) / faktoriyel((i*2)+1);
    }
    return toplam;
}

int faktoriyel(int sayi) {
    int f = 1;
    for (int i = 2; i <= sayi; i++) {
        f *= i;
    }
    return f;
}