#include <stdio.h>
#include <stdlib.h>
#include <math.h> /* Notas o comentarios */

int cuadrado(int x){
	return x*x;
}

int cubo(int x){
	return x*x*x;
}

int formula(int x, int y){
	/* x^2+y^3-43 */
	return (x*x+y*y*y-34);
}
	
int main( ) {
	
	printf("Hola Mundo\n");
	printf("%d \n", cuadrado(20));
	printf("%d\n", cubo(8));
	printf("%d\n", formula(2,3));
	printf("%.2lf\n", sqrt(81) + pow (5,2));
	
	return 0;
}
