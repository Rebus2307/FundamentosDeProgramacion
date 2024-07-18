#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * arvg[]){

	printf("%.2lf \n", sqrt(9));
	printf("%.2lf \n", sqrt(sqrt(9)));
	printf("%.2lf \n", sqrt(pow(5,sqrt(100))));
	printf("%.2lf \n", sqrt(pow(4,2)+pow(6,2)));
	printf("%.2lf \n", pow(sqrt(6),sqrt(9)));
	return 0;
}
