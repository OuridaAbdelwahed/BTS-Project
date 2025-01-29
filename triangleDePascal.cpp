#include <stdio.h>
#include <iostream>
using namespace std;

const int N=10 ;
int T[N][N];
int i,j,degre;

main (){
	cout<<"degre = ";
	cin>>degre;
	for(i=0;i<=degre;i++)
		for(j=0;j<=degre;j++){
			if(i==j || j == 0) 	T[i][j]=1;
		}
	for(i=0;i<=degre;i++){
		for(i=0;i<=degre;i++){
		}
				T[i][j]= T[i-1] [j-1]+T[i-1][j];
				
				
				for(j=0;j<=i;j++){
				cout<<T[i][j]<<"\t";
				cout<<endl;
				}
				
	}

}
