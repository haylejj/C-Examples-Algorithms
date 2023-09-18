#include <stdio.h>
#include <stdlib.h>

void makeHankelMatrix(char[20][20],char[20][20]);
void makeMatrix(char[20][20]);
void printMatrix(char[20][20]);
int main(int argc, char *argv[]) {
	
	char Matrix[20][20];
	char hankelMatrix[20][20];
	makeMatrix(Matrix); // A to T matrix 
	printMatrix(Matrix);//print
	makeHankelMatrix(Matrix,hankelMatrix);//make hankel matrix
	printf("\n\n\n\n\n\n");
	printMatrix(hankelMatrix);
	return 0;
}
void makeMatrix(char matrix[20][20]){
	char x='A';
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			matrix[i][j]=x++;
			if(x>'T')
			x='A';
		}
	}
}
void printMatrix(char matrix[20][20]){
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			printf("%c",matrix[i][j]);
		}
		printf("\n");
	}
}
void makeHankelMatrix(char matrix[20][20],char hankelMatrix[20][20]){
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			hankelMatrix[i][j]=matrix[i][(i+j)%20];
		}
	}
}