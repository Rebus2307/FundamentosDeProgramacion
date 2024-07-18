#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// ctrl + d borra la linea del cursor

double SumaCuadrados(double y, double z){
	return pow(y,2)+pow(z,2);
}

void mensajes(int x){
	printf("Valor de x= %d", x);
}

double hipot(double a, double b){
	return sqrt(pow(a,2)+pow(b,2));
}

double formula(double x, double y){
    return (pow(x,7)-pow(y,1/3.0) ) / (M_PI-M_E);
}

int main() {
	
	mensajes(80);	
	printf ("\nResultado= %.2lf",SumaCuadrados(3,4));
	printf ("\nEl coseno de PI = %.2lf", cos(3.1416));
	printf ("\nExponencial de 1 = %.2lf", exp(1));
	printf("\nLogaritmo de 2.8182 = %2.lf", log(2.8182));
	printf("\nLa raiz quinta de 32 = %.2lf", pow(32,1/5.0));
	printf("\nLog10 de un millon = %.1lf",log10(1000000));
	printf("\nHipot a=3 b=4 = %.1lf",hipot(3,4));
	printf("\nFormula = %lf", formula(1,2));
	
	return -5;
}




