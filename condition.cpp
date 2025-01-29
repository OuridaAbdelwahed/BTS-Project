#include <stdio.h>
float a,b,c;
arabic (){
	printf("donner le divideur : ");
	scanf("%f",&a);
	printf("donner le diviseur : ");
	scanf("%f",&b);
	if (b!=0) {
		c = a/b;
		printf("le resultat de division est : %.2f",c);
	} else
	printf("math syntax error");
}
stdre (){
	double A,B;
	printf("donner le nombre A : ");
	scanf("%lf",&A);
	printf("donner le nombre B : ");
	scanf("%lf",&B);
	if(A>B) 
	printf("le maximum est : %.3lf\n le minimum est : %.3lf\n",A,B);
	else if (A==B)
	printf("A = B = %.3lf",A);
	else 
	printf("le maximum est : %.3lf\n le minimum est : %.3lf\n",B,A);
}
rebos (){
	int A;
	printf("donner le nombre A : ");
	scanf("%d",&A);
/*	printf("donner le nombre B : ");
	scanf("%d",&B);*/
	if(A < 0) 
	printf("le nombre %d est negative",A);
	else if (A==0)
	printf("le nomber %d est nul",A);
	else 
	printf("le nombre %d est positive",A);
	
	
}
anternet (){
	float temperature;
	printf("donner la temperature de l\'eau : ");
	scanf("%f",&temperature);
	if (temperature > 100)
	printf("L\'etat de 'l\'eau est vapeur ");
	else if (temperature > 0)
	printf("L\'etat  l\'eau es liquide");
	else 
	printf("L\'etat  L\'eau est solid");
}
main (){
	int nbrj;
	printf("donner le nombre entre 1 et 7 : ");
	scanf("%d",&nbrj);
	switch(nbrj) {
	case 2 :printf("Monday");
	break;
	case 3:printf("Tursday");
	break;
	case 4:printf("wedndesday");
	break;
	case 5:printf("Tuesday");
	break;
	case 6:printf("Friday");
	break;
	case 7:printf("Saturday");
	break;
	case 1:printf("Sunday");
	break;
	default :printf("le nombre est incorrecte");
	break;
	}	
}
