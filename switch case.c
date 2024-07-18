#include <stdio.h>
#include <stdlib.h>


int main() {
	int x;
	printf("Ingrese un numero del 1 al 10: ");
	scanf("%d",&x);
	
	switch(x){
	case 1: printf("I"); break;
	case 2: printf("II"); break;
	case 3: printf("III"); break;
	case 4: printf("IV"); break;
	case 5: printf("V"); break;
	case 6: printf("VI"); break;
	case 7: printf("VII"); break;
	case 8: printf("VIII"); break;
	case 9: printf("IX"); break;
	case 10: printf("X"); break;
	default: printf("El numero no esta entre 1 y 10");
	
	}
	
	return 0;
}
