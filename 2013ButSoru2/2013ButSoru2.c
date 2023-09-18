#include <stdio.h>
#include <stdlib.h>

int hesapla(int n){ 
 return(ucgen(n)+lucas(n)); 
} 
int ucgen(int n){ 
 return(n*(n+1)/2); 
} 
int lucas(int n){ 
 if (n==0) 
 return(2); 
 else if (n==1) 
 return(1); 
 else 
 return(lucas(n-1)+lucas(n-2)); 
} 

int main(int argc, char *argv[]) {
	
	int n,z; 
 	
	printf("n degerini giriniz-> "); 
 	scanf("%d",&n); 
	
	z=hesapla(n); 
 	printf("z[%d] degeri = %d\'dir\n",n,z); 
 	
	 return(0); 
}
