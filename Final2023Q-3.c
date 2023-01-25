#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//ln(x+1)=x-x^2/2+x^3/3-x^4/4
	float a,x;
	float temp;
	float result=0;
	printf("Lutfen 1 ile 2 arasinda bir sayi giriniz.");
	scanf("%f",&a);
	x=a-1;
	
	for(int i=1;i<7;i++)
	{
		temp=(float)1/i;
		if(i%2==0)
		{
			for(int j=0;j<=i;j++)
			{
				temp=temp*x;
			}
			result=result+temp;
		}
		else
		{
			for(int j=0;j<i;j++)
			{
				temp=temp*x;
			}
			result=result+temp;
		}
	}
	printf("%f",result);
	
	return 0;
}