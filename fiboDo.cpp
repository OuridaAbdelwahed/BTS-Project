#include <stdio.h>
int n,f1,f2,fn,i;
main(){
	printf("n = ");
	scanf("%d",&n);
	f1=f2=1;
	i=3;
	do{
		i++;
		fn=f2+f1;
		f1=f2;
		f2=fn;
	}while(i<=n);
	printf("fn = %d",fn);
}
