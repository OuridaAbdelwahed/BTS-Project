#include <stdio.h>
const int L=3;
const int C=6;
float M[L][C];
int i,j;
main(){
	for(i=0;i<L;i++)
		for(j=0;j<C;j++)
			{
				printf("M[%d][%d] = ",i,j);
				scanf("%g",&M[i][j]);
			}
			printf("***************\n");
	for(i=0;i<L;i++){
		for(j=0;j<C;j++)
			printf("%g\t",M[i][j]);
			printf("\n");
	}
		
}
