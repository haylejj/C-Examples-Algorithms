#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int firstmatrix[5][5];
	int secondmatrix[5][5];
	int toplammatrix[5][5];
	int i,j,toplamsatir=0,toplamsutun=0;
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
    printf("TOPLAM MATRIS:\n");
    for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			toplammatrix[i][j]=firstmatrix[i][j]+secondmatrix[i][j];
			printf("%d\t",toplammatrix[i][j]);
		}
		printf("\n");
	}        
	return 0;
}