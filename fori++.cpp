#include <stdio.h>
int i,somme=0,n;
main(){
	printf("Donner n : ");
	scanf("%i",&n);
	for(i=1;i<n;i++) {
		somme=somme+i;
	}
	printf("somme = %d",somme);
}
