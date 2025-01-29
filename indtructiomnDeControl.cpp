#include <stdio.h>

int N,i,S;
x (){
	S = 0;
	for (i=0;i<8;i++){
		printf("entrer le nombre : \n");
        scanf("%d",&N);
        if (N < 0)
        continue;//ignore the number negative 	
		S = S + N ;
	}
	printf(" La somme est : %d",S);
}
second (){
	S = 0;
	for (i=0;i<8;i++){
		printf("entrer le nombre : \n");
        scanf("%d",&N);
        if (N < 0)
        break; // stoper la boucle	
		S = S + N ;
}
	printf(" La somme est : %d",S);
}
// ona l'instruction "goto" 
main(){
	debut :
	printf(" entrer un nombre entre 1 et 5 : ");
	scanf("%d",N);	
	if ( N < 1 || N>5) 
			goto debut;
	printf("Parfet! vous entrer un nombre entre 1 et 5 !!");
}




