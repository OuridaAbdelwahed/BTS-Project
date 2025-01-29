#include <stdio.h>
#include <math.h>
#include <cmath>
float x1,x2,d,a,b,c;
main(){
	printf("Donner le nombre a : ");
	scanf("%f",&a);
	printf("Donner le nombre b : ");
	scanf("%f",&b);
	printf("Donner le nombre c : ");
	scanf("%f",&c);
	d=pow(b,2)-(4*a*c);
	if(d>0) {
		x1=(-b+sqrt(d))/(2*d);
		x2=(-b-sqrt(d))/(2*d);
		printf("x1 = %f",x1);
		printf("x2 = %f",x2);
		
	}
	else if(d==0){
		x1=-b/(2*a);
//		x2=x1;
		printf("x1 = %f",x1);
//		printf("x2 = %f",x2);
	}
	else {
		printf("Pas de solution dans l'ensemble IR");
	}
}
