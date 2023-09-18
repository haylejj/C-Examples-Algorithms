#include <stdio.h>
#include <string.h>

void hankel(int[5][5], int[5][5]);
void matrixOlustur(int[5][5]);
void printMatrix(int[5][5]);

int main(void) {
    int matrix1[5][5];
    int hankelMatrix[5][5];
    matrixOlustur(matrix1);
    hankel(matrix1,hankelMatrix);
    printMatrix(hankelMatrix);

    return 0;
}

void matrixOlustur(int matrix[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            matrix[i][j]=j+1;
        }
    }
}

void hankel(int matrix[5][5], int hankel[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            hankel[i][j]=matrix[i][(i+j)%5];
        }
    }
}

void printMatrix(int matrix[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}



