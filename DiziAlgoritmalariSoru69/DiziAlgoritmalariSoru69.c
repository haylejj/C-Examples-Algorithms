#include <stdio.h>
int main() {
    int N;
    printf("Dizinin eleman sayisini girin: ");
    scanf("%d", &N);

    int dizi[N];
    int i;

    printf("%d adet sayi girin:\n", N);
    for (i = 0; i < N; i++) {
        int sayi;
        printf("Sayi girin: ");
        scanf("%d", &sayi);

        if (i % 2 == 0) {
            dizi[i/2] = sayi;
        } else {
            dizi[N - (i/2) - 1] = sayi;
        }
    }

    printf("Dizi: ");
    for (i = 0; i < N; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}