#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#define M 20;
#include <iostream>

using namespace std;


const int N=10;
int i,j;
float tab[N];

main(){
	
	 for(i=0;i<N;i++){
	 	printf("tab[%d] = ",i);
	 	scanf("%f",&tab[i]);
	 }
	 for(i=0;i<=N/2;i++){
	 	float temp = tab[i];
	 	tab[i]= tab[N - i  - 1] ;
	 	tab[N - i  - 1]=temp;		  
	 }
	 for(i=0;i<N;i++){
	 	printf("tab[%d] = %g \n ",i,tab[i]);
	 }
	 
	 // methode 2
	  /*
	   for(i=0,j=N-1;i<j;i++ , j--) {
	   a = T[i] ;
	   T[i] =T[j] ;
	   t[j]=a;
	}
	
	affichge de resultat
	
	for(i=0;i<N;i++){
		
	printf("tab[%d] =  ",i,tab[i]);
	
	}
	  */
	 
	 
}
