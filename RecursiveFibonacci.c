#include <stdio.h>
#include <stdlib.h>

int RecursiveFibonacci(int);

int main(void) {
	int i,n;
	printf("Fibonacci sayi dizisinin kac elemanini hesaplamak istersin?: "); scanf("%d",&n);
	printf("\nIstedigin Fibonacci dizisi:\n");
	for(i=0;i<=n;i++)
		printf("%d ",RecursiveFibonacci(i));	
	
	return 0;}

int RecursiveFibonacci(int i)
	{
		if(i==1) return 1;
		else if(i==0) return 0;
		else  return (RecursiveFibonacci(i-1)+RecursiveFibonacci(i-2));
	}
	
	
