#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	
	int n,i,j;
	
	printf("Ingresa un numero: ");
	scanf("%d", &n);
	
	for ( i = 1 ; i <= n ; i++ ){
		printf("\n");
		
			for ( j=1 ; j <= i ; j++ )
			printf("%d ",j);
	}

	for ( i = n-1 ; i > 0 ; i-- ){
		printf("\n");
		
			for ( j = 1 ; j <= i ; j++ )
			printf("%d ",j);
	}
	
	
	
	return 0; 
}

