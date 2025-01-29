#include <stdio.h>
int n,bin,p,r;
main(){
	 bin=0;
	 p=1;
	 printf("n = ");
	 scanf("%d",&n);
	 printf("oct = %o\n",n);
	 printf("hexa = %X\n",n);
//	 while(n!=0) {
//	 	r=n%8;
//	 	n=n/8;
//	 	bin=bin+(r*p);
//	 	p*=10;
//		} 
		for(;n!=0;n=n/2){
			r=n%2;
//		 	n=n/2;
		 	bin=bin+(r*p);
		 	p*=10;
		}
	 printf("bin = %d",bin);
}
