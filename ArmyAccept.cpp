#include <stdio.h>
#include <stdlib.h>

char *armyAccept (int age, double height, double weight, char gen){
		
		if ( gen == 'm' || gen == 'M'){
		
			if (age >= 18 && height >= 1.65 && weight < 90.50){
				return "Aceptado"; // Aceptado
			}
		}
		
		
		if ( gen == 'f' || gen == 'F'){
		
			if (age >= 18 && height >= 1.50 && weight < 70){
				return "Aceptada"; // Aceptado
			}
		}
		
		return "No aceptad@"; //No aceptado
	}

int main (){
	int age;
	printf("Ingresa tu edad: "); 
	scanf("%d", &age);
	
	double height;
	printf("\nIngresa tu estatura: "); 
	scanf("%lf", &height);
	
	double weight;
	printf("\nIngresa tu peso: "); 
	scanf("%lf", &weight);
	
	char gen;
	printf("\nIngresa tu genero: "); 
	fflush(stdin);
	scanf("%c", &gen);
	
	printf("%s",armyAccept (age, height, weight, gen)); //ctrl + e copia linea
	return 0; // Éxito
}
