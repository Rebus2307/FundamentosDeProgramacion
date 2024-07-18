#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double moduloCuadrado(int n1, int n2, int n3){
	
	return pow(n1*n2*n3,3);
}

int main(){
	
	int n1,n2,n3;
	
	printf("Inserte valor de n1: \n");
	scanf("%d", &n1);
	printf("Inserte valor de n2: \n");
	scanf("%d", &n2);
	printf("Inserte valor de n3: \n");
	scanf("%d", &n3);
	
	printf("El resultado es: %lf", moduloCuadrado(n1,n2,n3));
	
	return 0;
}
