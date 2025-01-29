#include <stdio.h>
const int L=1;
const int C=2;
float A[L][C],B[L][C],S[L][C];
int i,j;
main(){
	for(i=0;i<L;i++)
		for(j=0;j<C;j++)
			{
				printf("A[%d][%d] = ",i,j);
				scanf("%g",&A[i][j]);
			}	
		for(i=0;i<L;i++)
			for(j=0;j<C;j++)
			{
				printf("B[%d][%d] = ",i,j);
				scanf("%g",&B[i][j]);
			}
			printf("***************\n");
	for(i=0;i<L;i++){
		for(j=0;j<C;j++)
			printf("%g\t",A[i][j]);
			printf("\n");
	}
	printf("***************\n");
	for(i=0;i<L;i++){
		for(j=0;j<C;j++)
			printf("%g\t",B[i][j]);
			printf("\n");
	}
	for(i=0;i<L;i++){
		for(j=0;j<C;j++)
		S[i][j]=A[i][j]+B[i][j];
		}
			printf("***************\n");
	for(i=0;i<L;i++){
		for(j=0;j<C;j++)
			printf("%g\t",S[i][j]);
			printf("\n");
	}
}
