#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fibonacci(int);
void printfFibonacci(int);

int main(void) {
	int n;
	printf("Kac terime kadar fibonacci hesaplanacak ??\n");
	scanf("%d",&n);
	printfFibonacci(n);
	
	return 0;
}
int fibonacci(int n){
	if(n<=1) return n;
	
	return fibonacci(n-1)+fibonacci(n-2);
}
void printfFibonacci(int n){
	for(int i=0;i<n;i++){
		printf("%d\n",fibonacci(i));
	}
}