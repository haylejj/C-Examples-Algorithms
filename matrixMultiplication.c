#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int firstmatrix[5][5];
	int secondmatrix[5][5];
	int carpimmatrix[5][5];
	int i,j,k,toplamsatir=0,toplamsutun=0;
	srand(time(NULL));
	printf("ILK MATRIS:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			firstmatrix[i][j]=rand()%10;
			printf("%d\t",firstmatrix[i][j]);
		}
		printf("\n");
	}
	printf("IKINCI MATRIS:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			secondmatrix[i][j]=rand()%10;
			printf("%d\t",secondmatrix[i][j]);
		}
		printf("\n");
	}        
    printf("Carpim Matrisi:\n");
    for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			int toplam=0;
			for(k=0;k<5;k++)
			{
				toplam+=firstmatrix[i][k]*secondmatrix[k][j];
			}
			carpimmatrix[i][j]=toplam;
			printf("%d\t",carpimmatrix[i][j]);
		}
		printf("\n");
	}        
	return 0;
}