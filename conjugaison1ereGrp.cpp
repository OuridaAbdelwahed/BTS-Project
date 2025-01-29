#include <stdio.h>
#include <string.h>
const int N=30;
char verbe[N],radical[N];
char term[6][4]={"e","es","e","ons","ez","ent"};
char pro[6][5]={"je","tu","il","nous","vous","ils"};
main(){
	printf("Donner un verbe du 1ere group : ");
	gets(verbe);
	if(verbe[strlen(verbe)-2]!='e'  || verbe[strlen(verbe)-1]!='r'){
		do{
			printf("svp saisir un verbe terminer par 'er' : ");
			gets(verbe);	
			}while(verbe[strlen(verbe)-2]!='e' || verbe[strlen(verbe)-1]!='r');
	}	
	else{
		verbe[strlen(verbe)-2]=0x0;
		strcpy(radical,verbe);
		for(int i =0;i<6;i++){
			strcat(verbe,term[i]);
			printf("%s %s\n",pro[i],verbe);
			strcpy(verbe,radical);
		}
	}
}

