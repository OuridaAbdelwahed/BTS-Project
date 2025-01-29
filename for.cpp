#include <stdio.h>
#include <math.h>
int nombre,resultat;
int i;
produit (){
 	printf("donner le nombre : ");
	scanf("%d",&nombre);
	for(i=0;i<=1000;i++){
	    resultat = nombre * i;
		printf("%d * %d = %d \n",nombre,i,resultat);
	}
	
}
int S;

SOMMME () {
	S=0;
	for(i=0;i<=20;i++){
		S+=i;
		
	}
	printf("la somme = %d",S);
}
int N,result;

second (){
	printf("Saisir le nombre 3 : ");
	scanf("%d",&N);
	while(N!=3){
	printf("Veuillez saisir le nombre 3 ! ");
	scanf("%d",&N);		
	}
		for (i=0;i<=10;i++){
		result =N*i;
		printf(" %d * %d  = %d \n",N,i,result);
	}

} 
main (){
	int num,i;
	printf("Saisir un nombre entre 10 et 20 : ");
	scanf("%d",&num);
	while (num<10 || num>20) {
		if(num<10)
			printf("Plus petite !\n");
		else 
			printf("Plus grand ! \n");
			printf("Veuillez Saisir un nombre entre 10 et 20 : ");
			scanf("%d",&num);
	}
	printf("le nombre qui y a donner est : %d ",num);
}
