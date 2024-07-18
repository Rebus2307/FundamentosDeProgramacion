#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int arg, char * argv[]){
	
float peso, estatura, IMC;

	printf("Ingresa tu peso: ");
    scanf("%f",&peso);
    
    printf("Ingresa tu estatura: ");
    scanf("%f",&estatura);
    
    IMC = peso/estatura;
    
    printf("Tu peso es es: %.2f", peso);
    printf("\nTu peso es es: %.2f", estatura);
    printf("\nTu IMC es: %.2f", IMC);
	
	
	return 0;
}
