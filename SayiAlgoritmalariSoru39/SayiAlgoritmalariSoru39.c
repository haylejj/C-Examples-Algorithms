#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HAK 10

int* randomNumber();
int gameStart(int*);

int main(void) {
    int *random = randomNumber();
    int result = gameStart(random);
    
    if (result == 1) {
        printf("\nTEBRIKLER OYUNU KAZANDINIZ!!\n");
    } else {
        printf("\nUZGUNUZ BIR DAHA KI SEFERE :( \n");
    }
    
    free(random);
    
    return 0;
}

int* randomNumber() {
    srand(time(NULL));
    int *random = malloc(sizeof(int));
    *random = rand() % 100 + 1;
    return random;
}

int gameStart(int *random) {
    int counter = 0;
    int tahmin;
    
    do {
    	printf("%d hakkiniz kaldi.\n",HAK-counter);
        printf("Sayi Giriniz.\n");
        scanf("%d", &tahmin);
        
        if (tahmin > *random) {
            printf("\nTahmininizi Azaltin.\n");
        } else if (tahmin < *random) {
            printf("\nTahmininizi Arttirin.\n");
        } else {
            return 1;
        }
        
        counter++;
    } while (HAK != counter);
    
    return 0;
}
