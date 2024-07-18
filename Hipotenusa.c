//CALCULAR UNA HIPOTENUSA
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int hipotenusa(int a, int b){
	return (sqrt((a*a)+(b*b)));
}

int main(){
	
	printf("%i", hipotenusa(3,4));
	
	return 0;
}
