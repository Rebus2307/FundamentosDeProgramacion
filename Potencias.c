#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double potXYZ(double x, double y, double z){
		
		return pow(x,y*z);
	}

int main (int arg, char * arvg[]){
	printf("%lf \n", pow(2,15));
	printf("%lf \n", potXYZ(2,3,5));
	printf("%lf \n", pow(pow(2,5),2));
	printf("%lf \n", pow(10,6)+pow(3,4));
	printf("%lf \n", pow(M_PI,2));
	return 0;
}
