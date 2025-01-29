#include <stdio.h>
#include<stdlib.h>
#include<time.h>
const int N = 10;
float T[N],x;
int i,j;
main(){
	//lecture du tableau
	srand(time(0));
	
	for( i = 0 ; i<N;i++){
		T[i]=rand()%30 + 1;
		printf("T[%d] = %g \n",i,T[i]);
	}
	
	printf("donnez la valeur à chercher");
	scanf("%f",&x);
//	for(i=0;i<N ;i++)
//		if(x==T[i]){
//			printf("trouvee a %d\n",i);
//			_exit;
//		}
	i=0;
	do{
		i++;
	}while(x!=T[i] && i<N);
	if(x==i)
		
		printf("trouvee a %d\n",i);
	
	else
		printf("%g\n",T[i]);
		printf("%g non trouvee\n",x);
				
		
		
		// affichage de tableau
	//for(i = 0 ; i<N;i++)
	//printf("T[%d] = %g \n",i,T[i]);

}
