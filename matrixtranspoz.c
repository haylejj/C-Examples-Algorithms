#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	int firstmatrix[5][5];
	int transpozmatrix[5][5];
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
	printf("TRANSPOZ MATRIS:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			transpozmatrix[i][j]=firstmatrix[j][i];
			printf("%d\t",transpozmatrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}