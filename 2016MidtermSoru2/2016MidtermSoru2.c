#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int x;
	do{
		printf("Lutfen bir deger giriniz->>>>>\n");
		scanf("%d",&x);	
	}while((x<2)||(x>9));
	
	int j;
	
	 for(int i=1;i<=x;i++){
	 	for(j=1;j<=x-i;j++){
	 		printf("-");
		 }
		 int m=x;
		 	for(int k = 1;  k <=i; k++) {
        	printf("%d", m--);
    		}
		 printf("\n");
	 }
	
	return 0;
}