#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int nb,binf,bsup,milieu;
const int N = 10;
float T[N],x;
int i,j;
main(){
	srand(time(0));
	for(i=0;i<N;i++){
		T[i]=rand()%200;
		printf("T[%d]  =  %g\n",i,T[i]);
	}
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			if(T[i]>=T[j]){
				int temp=T[i];
				T[i]=T[j];
				T[j]=temp;
			}
			printf("**********\n");
		for(i=0;i<N;i++){
		printf("T[%d]  =  %g\n",i,T[i]);
	}
	printf("x=  ");
	scanf("%f",&x);
	binf=0;
	bsup=N-1;
	do{
		milieu=(binf+bsup)/2;
		if(x>T[milieu])	binf=milieu+1;
		if(x<T[milieu])	bsup=milieu-1;	
	}while(binf<=bsup && x !=T[milieu]);
	if(binf>bsup) printf("non trouvee!");
	else printf("%g  se trouve en  %d\n",x,milieu);
		
}
