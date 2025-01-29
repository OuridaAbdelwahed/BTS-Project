#include <stdio.h>
const int N = 5;
int i,j,temp;
float T[N],MoyGen=0,S,moyClass;
main (){
	for (i=0;i<N;i++){
		printf("Donner la note numero %d: ",i+1);
		scanf("%f",&T[i]);
    }
    	// triage de tableau 
	for (i=0;i<N-1;i++){
		for (j=i+1;j<N;i++){
			if(T[i]<T[j]){
				temp=T[i];
				T[i]=T[j];
				T[j]=temp;
			}			
		}
    printf(" les notes des etudiant : \n");
 for(i = 0 ; i<N;i++)
	printf("T[%d] = %g \n",i,T[i]);
	for(i=0;i<N;i++){
		S = S + T[i];
	}
	MoyGen = S/N;
	printf("le Moyen de la class est : %.2f ",MoyGen);

		
	}
	
}

second(){
	//lecture du tableau
	for( i = 0 ; i<N;i++){
		printf("T[%d] = ",i);
		scanf("%g",&T[i]);
	}
	//float max=0;
	//max=min=T[0];
	float max=T[0];
	for(i=1;i<N;i++)
	if(max<T[i])max=T[i];
	printf("la plus grande note est:  %g\n",max);
	//float min=20;
	float min=T[0];
	for(i=1;i<N;i++)
	if(min>T[i])min=T[i];
	printf("la plus petite note est:  %g\n",min);
	moyClass=0;
	for(i = 0 ; i<N;i++)
		moyClass=moyClass+T[i];
	
	moyClass=moyClass/N;
	printf("La moyenne est: %g\n",moyClass);
	int nbrSupMc=0;
	for(i=1;i<N;i++)
	if(T[i]>moyClass) {
	 nbrSupMc++;
	 printf("T[%d] = %g\n",i,T[i]);
	}
	printf("le nbrSupMc = %d\n0",nbrSupMc);
	// triage de tableau 
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			if(T[i]<T[j]){
				int temp=T[i];
				T[i]=T[j];
				T[j]=temp;
			}
		
		// affichage de tableau
	
	for(i = 0 ; i<N;i++)
	printf("T[%d] = %g \n",i,T[i]);
}

