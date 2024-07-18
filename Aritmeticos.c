#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double aritmetica(double x, double y, double z, double w ){
 return x / y - z *  w ; // 10/3 = 3    10.0/3=3.333       
}
int relacional(int x, int y, double z, double w ){//  >  >= < <= == != 
    return    x%y <= z*w ;
} 
int main( ) {
  //  printf("Resultado = %.1lf", aritmetica(10,3,4,6));
	printf("Resultado = %d", relacional(10,2,3,3));
	printf("\nAritmetica = %lf", aritmetica(3,5,7,2));
    return 0;
}

