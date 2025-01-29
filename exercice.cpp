#include <stdio.h>
#include <math.h>
float r,volume;
const double pi=3.14;

main(){
	printf("Donner le rayon : ");
	scanf("%f",&r);
	volume=(4*pi*pow(r,3))/3;
	printf("Le rayon = %f",volume);
}

