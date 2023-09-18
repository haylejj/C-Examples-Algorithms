#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void matrixOlusturma(char[],char[8][8]);
void printMatrix(char[8][8]);
void transpozMatrix(char[8][8],char[8][8]);
void printDizgi(char[],char[8][8]);
int main(void) {
	
	char dizgi1[]="Erciyes Universitesi a.b.1978 tarihinde Kayseri'de kurulmustur.";
	char dizgi2d[8][8];
	char transpoz2d[8][8];
	matrixOlusturma(dizgi1,dizgi2d);
	
	printf("\n 8x8 lik  Matrix :\n");
	
	printMatrix(dizgi2d);
	
	transpozMatrix(dizgi2d,transpoz2d);
	
	printf("\nTranspoz alinmis Matrix \n");
	
	printMatrix(transpoz2d);
	
	printf("\n Sifrelenmis dizgi:\n");
	
	printDizgi(dizgi1,transpoz2d);

	printf("\n Sifrelenmis Matrix:\n");
	printMatrix(transpoz2d);
	
	transpozMatrix(transpoz2d,dizgi2d);
	
	printf("\n Yeniden Transpoz alinmis matris\n ");
	printMatrix(dizgi2d);
	
	printf("\nSifresi Cozulmus Matrix:\n");
	printDizgi(dizgi1,dizgi2d);
}
void matrixOlusturma(char dizgi1[], char dizgi2d[8][8]) {
    int k = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            dizgi2d[i][j] = dizgi1[k++];
        }
    }
}
void printMatrix(char matrix[8][8]) {
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}
void transpozMatrix(char dizgi2d[8][8],char transpozMatrix[8][8]){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			transpozMatrix[j][i]=dizgi2d[i][j];
			
		}
	}
}
void printDizgi(char dizgi[],char dizgi2d [8][8]){
	int k=0;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			dizgi[k]=dizgi2d[i][j];
			printf("%c",dizgi[k]);
			k++;
		}
	}
}



















