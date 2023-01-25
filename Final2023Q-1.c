#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int array2D[8][8];
	 int m1[8][8];
	 int m2[64];
	 int m3[8][8];
	 //printf("Bir dizgi girininiz.");
	 //scanf("%s",array);
	 //printf("Girilen dizgi ---->>>> \n");
	 int k;
	 int i,j;
	 int q=0;
	 for( i=0;i<8;i++)
	 {
	 	for(int j=0;j<8;j++)
		 {
		 	array2D[i][j]=j;
		 }
    }
    printf("----MATRIX----\n");
    for(int i=0;i<8;i++)
	 {
	 	for(int j=0;j<8;j++)
		 {
		 	printf("%d",array2D[i][j]);
		 }
		 printf("\n");
    }
    
    ///matrixin 1.yarısı
    for(k=0;k<8;k++)
	{
		for( i=0 ,j=k;i<=k;i++,j--)
		{
			printf("%d",array2D[i][j]);
			m2[q++]=array2D[i][j];
		}
		printf("\n");
	}
    // matrixin 2.yarısı
    for(k=1;k<8;k++)
	{
		for(i=k,j=7;i<8;i++,j--)
		{
			printf("%d",array2D[i][j]);
			m2[q++]=array2D[i][j];
		}
		printf("\n");
	}
    printf("----SIFRELENMIS----\n\n\n");
    for(i=0;i<64;i++)
	{
		printf("%d",m2[i]);
	}
	printf("\n\n\n----COZME----\n\n\n");
	printf("\n");
	q=0;
	for(k=0;k<8;k++){
		for( i=0 ,j=k;i<=k;i++,j--)
		{
			m3[i][j]=m2[q++];
			printf("%d",m3[i][j]);	            
		}
		printf("\n");
	}
   
    for(k=1;k<8;k++)
	{
		for(i=k,j=7;i<8;i++,j--)
		{
			m3[i][j]=m2[q++];
			printf("%d",m3[i][j]);
			            
		}
		printf("\n");
	}
	printf("\n\n\n----SIFRE COZULMUS MATRIX----\n\n\n");
	 for( i=0;i<8;i++)
	 {
	 	for(int j=0;j<8;j++)
		 {
		 	
		 	printf("%d",m3[i][j]);
		 }
		 printf("\n");
    }
	 
	 
	 
	 
	return 0;
}