#include <stdio.h>
int n,f1,f2,fn,i;
main(){
	printf("n = ");
	scanf("%d",&n);
	f1=f2=1;
	i=3;
	while(i<=n){
		i++;
		fn=f2+f1;
		f1=f2;
		f2=fn;
	}
	printf("fn = %d",fn);
}
