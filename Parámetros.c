#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int suma_cuadrados(int x, int y){
	return (x*x) + (y*y);
}

double ec2g(double a, double b, double c){
	return (-b + sqrt(pow(b,2)-4*a*c) / 2*a);
}

void matematica(double x, double y, double z, double w){
printf("%.1lf al %.1lf = %.1lf", x, y, pow(x,y));
printf("\n raiz de %.1lf = %.1lf", z, sqrt(z));
printf("\n coseno de %lf = %.1lf", w, cos(w));
printf("\n Suma anteriores = %.1lf", pow(5,2) + sqrt(81) + cos(M_PI));
}

int main(int argc, char *argv[]) {
	matematica(5,2,81,4);
	printf("\n Raiz = %lf", ec2g, (2, 100, 3));
	printf("\n Suma de cuadrados = %d", suma_cuadrados(10,8));
	printf("\n Numero de Euler = %.4lf", M_E);
	printf("\n Log 10 de 1000000 = %.4lf", log10(1000000));
	printf("\n E al cuadrado = %.4lf", pow(M_E,2));
	printf("\n Log de 7.3891 = %.4lf", log(7.3891));
return 0;
}
