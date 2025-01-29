#include <stdio.h>
const int N=3 ;
float T[N],B[N];
float PS;
int i,j;
main(){	
		PS =0;
		for ( i=0 ; i<N ; i++ ) {
			printf("Donner le nombre %d de nombre U : ",i+1);
			scanf("%d",&T[i]);
		}
		for ( i=0 ; i<N ; i++ ) {
			printf("Donner le nombre %d de nombre V  : ",i+1);
			scanf("%d",&B[i]);
		}
		PS = T[0]*B[0] +T[1]*B[1] +T[2]*B[2];
		printf(" Le produit scalair est : %.2f",PS);
}
