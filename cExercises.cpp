#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <stdbool.h>



/*
	Exercices " Instruction de base  "
*/


// programme qui affiche l'annee de naissance

first (){
	int age,birthday;
	printf("Type your birthday : ");
	scanf("%d",&birthday);
	age = 2024 - birthday ;
	if (birthday == 2024)
	printf("I can\'t give you  the exact age i can \n just give you the year , but maybe the person \n that you want to calculat their age is a child now !");
	else
	printf("Your age is : %d",age);
}

// programme qui affiche le perimetre et la surface d'un rectangle

secend (){
	float largeur,longueur,perimetre,surface;
	printf("Donner la largeur de rectangle : ");
	scanf("%f",&largeur);
	printf("Donner la langueur de rectangle : ");
	scanf("%f",&longueur);
	perimetre = (largeur + longueur) * 2 ;
	surface = largeur * longueur ;
	printf("Le perimetre de cette rectangle est :  %.2f \n",perimetre);
	printf("La surface de cette rectangle est :  %.2f ",surface);
}

// programme qui calcule la puissance d'un nombre x power y

tirth(){
	float a,b,power;
	printf("Donner la base : ");
	scanf("%f",&a);
	printf("Donner la puissance : ");
	scanf("%f",&b);
	power = pow(a,b);
	printf("Le resultat de %.1f a la pauissance %.1f est : %.2f",a,b,power);
}

// programme qui affiche la somme,produit,division et la difference 

fourth (){
	float a,b,produit,somme,division,difference;
	printf("Donner le nombre a : ");
	scanf("%f",&a);
	printf("Donner le nombre b : ");
	scanf("%f",&b);
	somme = a + b ;
	produit = a * b ;
	difference = a -b;
	division = a / b ;
	printf("La somme de %.2f et %.2f  = %.2f\n",a,b,somme);
	printf("Le produit de %.2f et %.2f  = %.2f\n",a,b,produit);
	printf("La difference de %.2f et %.2f  = %.2f\n",a,b,difference);
	printf("La division de %.2f et %.2f  = %.2f",a,b,division);
}

// programme qui affiche la somme et le moyenne de 5 nombres

fiveth () {
	float a,b,c,d,f,somme,moyenne;
	printf("Donner les 5 nombes : \n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&f);
	somme = a + b+ c + d + f ;
	moyenne = somme / 5;
	printf("La somme des 5 nombres est : %.2f \n",somme);
	printf("Le moyenne des 5 nombres est : %.2f",moyenne);
}
sixth (){
	const float Pi = 3.14;
	float rayon,volumeSphere;
	printf("Donner le rayon : ");
	scanf("%f",&rayon);
	volumeSphere = (4*Pi*pow(rayon,3)/3);
	printf("Le volume de sphere est : %.2f ",volumeSphere);
}
seventh (){
	int A,B,temp;
	printf("Donner le nombre A : ");
	scanf("%d",&A);
	printf("Donner le nombre B : ");
	scanf("%d",&B);
	
	// traitement avec un troisieme variable 
	
	//	temp = A ;
	//	A = B;
	//	B = temp ; 

	// traitement without the thirth variable ...
	
		A = A + B ;
		B = A - B ;
		A = A - B ;
	
	printf("A = %d , B = %d",A,B);
}

//	Porgramme qui converte le temp de second en heures etb minutes

eighteth (){
	int second,minute,heures;
	printf("Donner le temp en second : ");
	scanf("%d",&second);
	heures = second / 3600 ;
	second = second % 3600 ;
	minute = second / 60 ;
	second = second % 60 ;
	printf(" %d heures %d minutes %d second",heures,minute,second);
}

//	programme qui calule la distance entre deux points A et B 

nineth (){
	float Xa,Xb,Ya,Yb,distance;
	printf("donner les coordonner de point A(X,Y) : \n");
	scanf("%f%f",&Xa,&Ya);
	printf("donner les coordonner de point B(X,Y) : \n");
	scanf("%f%f",&Xb,&Yb);
	distance = sqrt( pow((Xb-Xa),2) + pow((Yb-Ya),2) );
	printf("La distance entre A(%.2f,%.2f) et B(%.2f,%.2f) est : %.2f",Xa,Ya,Xb,Yb,distance);
}

//	programme qui calcule la resistance equivalent de trosi resitance dans le cas de montage en serie et en parallele

ten (){
	float R1,R2,R3,Requivalent1,Requivalent2;
	printf("Donner les trois resistance : \n");
	scanf("%f%f%f",&R1,&R2,&R3);
	
	//tratement es serie
	
	Requivalent1 = R1 + R2 + R3;
	
	// traitement en parallele
	
	Requivalent2 = (1/R1) + (1/R2) + (1/R3);
	
	printf("dans le montage en serie : Requ = %.2f \n",Requivalent1);
	printf("dans le montage en serie : Requ = %.2f",Requivalent2);
}

//	programme qui verifie si les deux nombre sont de meme signe ou non

eleven(){
	float a,b;
	printf("Donner le nombre 1 : ");
	scanf("%f",&a);
	printf("Donner le nombre 2 : ");
	scanf("%f",&b);
	if (a*b > 0)
	printf("les deux nombre est de meme signe");
	else if (a*b==0)
	printf("l\'un des deux nombre ou les deux nombre sont null ");
	else
	printf("les deux nombre est de signe different");
}

// programme qui echange le contenue de deux variable selon un condition

twelve(){
	float a,b,temp;
	printf("Donner le nombre A : ");
	scanf("%f",&a);
	printf("Donner le nombre B : ");
	scanf("%f",&b);
	if(a *b > 0){
		temp = a ;
		a = b;
		b = temp ;
		printf("A = %.2f \n B = %.2f",a,b);
	}
	else {
		temp = a ;
		a = a + b ;
		b = b*temp;
		printf("La somme est : %.2f \n Le produit est : %.2f",a,b);
	}
}

// programme qui calcule la facture des copie selon la condition de nombre

tirtheen(){
	float a;
	float facture;
	printf("Donner le nombre de copies : ");
	scanf("%f",&a);
	if (a <= 0)
		printf(" Pas de facture");
	else if(a <= 10){
		facture = a * 0.30 ;
		
	}
	else if(a<= 30) {
		facture = 10 * 0.30 + ( a - 10) * 0.25 ;
		
	}
	else {
		facture = 10 * 0.30 + 20 * 0.25 + ( a - 30) * 0.2 ;
		
	}
	
	printf(" la facture est %.2f euro",facture);
}

// programme qui traite l'age d'un enfant

fourtheen(){
	float age;
	printf("Donner son age : ");
	scanf("%f",&age);
	if (age<=0) {
		printf("Veullier saisir l\'age correct : ");
		scanf("%f",&age);
	}
	else if (age>=6 && age <=7) printf("Poussin");
	else if (age>=8 && age <=9) printf("Pupille");
	else if (age>=10 && age <=11) printf("Minime");
	else if (age>=12) printf("Cadet");
	else
	printf("Pas de categorie");
}

// programme qui traite les notes des etudiant

fiveteen(){
	float n1,n2,n3,moyenne;
	printf("Donner la premiere note : ");
	scanf("%f",&n1);
	printf("Donner la deuxieme note : ");
	scanf("%f",&n2);
	printf("Donner la troisieme note : ");
	scanf("%f",&n3);
	moyenne =( n1 + n2 + n3)/3;
	if (moyenne >= 16)
	printf("moyenne = %.2f \n mention \"Tres bien\"",moyenne);
	else if (moyenne >=14)
	printf("moyenne = %.2f \n mention \"bien\"");
	else if(moyenne>=12)
	printf("moyenne = %.2f \n mention \"Assez bien\"",moyenne);
	else if (moyenne >=10)
	printf("moyenne = %.2f \n mention \"Passable\"",moyenne);
	else 
	printf("moyenne = %.2f \n mention \"Insuffisant\"",moyenne);
}


// programme qui resudre une equation de 2Eme degre

sixteen(){
	float x1,x2,a,b,c,delta;
	printf("donner le nombre A : ");
	scanf("%f",&a);
	printf("donner le nombre B : ");
	scanf("%f",&b);
	printf("donner le nombre C : ");
	scanf("%f",&c);
	delta = pow(b,2) - (4 * a * c );
	if ( delta < 0)
		printf("Pas de solution dans IR");
	else if (delta == 0){
			x1 = -b /(2*a);
			printf(" X = %.2f",x1);
	}else if (delta > 0) {
			x1 = (-b - sqrt(delta))/(2*a);
			x2 = (-b + sqrt(delta))/(2*a) ;
			printf(" X1 = %.2f \n  X2 = %.2f",x1,x2);
	} 
}

// programme qui trait les impot  selon l ' age et le sexe

seventeen(){
	int age;
	char sexe;
	bool C1,C2;
	printf(" Donner votre sexe : ");
	scanf("%c",&sexe);
	printf(" Donner votre age : ");
	scanf("%d",&age);

	if ( (sexe=='m' && age >= 20) || (sexe='f' && age >=18 && age <=35) )
	printf(" il  est impostable");
	else 
	printf(" N'est pas impostable");
//	C1= sexe=='m' && age >= 20;
//	C2= sexe='f' && age >=18 && age <=35;
//	if ( C1==true|| C2==true )
//		printf(" N'est pas impostable");
//	else
//		printf(" N'est pas impostable");

}

// programme qui trait le prix de produits et sa categorie selon son TVA

eighteen(){
	float  pht,ttc;
	char category;
	printf(" Donner sa category  : ");
	scanf("%c",&category);
	printf(" Donner le PHT de produit  : ");
	scanf("%f",&pht);
//	if (category = 'a' ){
//			ttc = pht + (pht*a) ;
//			printf("TTC = %.2f",ttc);
//	}
//
//	else if (category ='b' ){
//			ttc = pht + (pht*b) ;
//			printf("TTC = %.2f",ttc);		
//	}
//
//	else if (category  = 'c'){
//
//			ttc = pht + (pht*c) ;
//			printf("TTC = %.2f",ttc);
//	}
switch (category){
	case 'a' :  printf("TTC = %.2f",pht + pht*0.07);
		      	break;
		case 'b' :
				printf("TTC = %.2f",pht + pht*0.2);
				break;
			case 'c' :
				printf("TTC = %.2f",pht + pht*0.25);
					break;
				default :printf("La category est incorrect ona trois categories a,b et c choisir une des trois categories ");
					break;
	}
}


// programme qui trait une operation deux deux nombre 

nineteen(){
	float a,b,result;
	char operat;
	printf("Donner l'operateur : ");
	scanf("%c",&operat);
	printf("Donner le nombre 1 : ");
	scanf("%f",&a);
	printf("Donner le nombre 2  : ");
	scanf("%f",&b);
	switch (operat) {
		case '+' :  result = a + b ;
					printf("La somme de %g %c %g = %g",a,operat,b,result);
					break;
		case '-' :  result = a - b ;
					printf("La sustraction de %g %c %g = %g",a,operat,b,result);
					break;
		case '*' :  result = a * b ;
					printf("La multiplication de %g %c %g = %g",a,operat,b,result);
					break;
		case '/' :  result = a / b ;
					printf("La division de %g %c %g = %g",a,operat,b,result);
					break;
		default : 	printf("L'operateur est fausse !!");
					break;
	}
	
}

// porgramme qui trait le bouge d'un personne a condition d'un nombre 

twenty(){
	int nbr;
	printf("Donner le nombre :   ");
	scanf("%d",&nbr);
	switch (nbr) {
		case 6 : printf("Go left");
				 break;
		case 4 : printf("Go right");
						 break;
		case 8 : printf("Go up");
						 break;
		case 2 : printf("Go down");
						 break;
		default : printf("typing error,No move !!");
						 break;
		}
}

//programme qui trait un nombre si il est paire ou impaire

twentyone (){
	int nb;
	printf("Donner le nombre : ");
	scanf("%d",&nb);
	if(nb % 2 == 1)
		printf("le nombre est impaire");
	else if ( nb % 2 == 0 )
		printf("le nombre est paire");
}

// programme qui trait une annee si il est bissextil ou non

twentytwo (){
	int annee;
	printf("Donner l'annee  : ");
	scanf("%d",&annee);
	if ( annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0)
		printf("l'annee est bissextil");
	else
		printf("l'annee est non bissextil");
}

	/*
		Exercices " structure repetitives ou les boucle "
	*/

  // programme qui trait  les dix nombre suivant a le nombre qu'il a saisir (boucle for)

twentythree(){
	int nbre,i;
	printf("Donner un nombre : ");
	scanf("%d",&nbre);
	for(i = 1;i<=10;i++) {
	 nbre++;
	 printf("%d \n",nbre);
	}
}

// programme qui trait  les dix nombre suivant a le nombre qu'il a saisir (boucle do....while / while ... ;)


twentyfour(){
	int n,i;
	printf("Donner un nombre : ");
	scanf("%d",&n);
	i =1 ;
	
	// boucle do ... while
	
	do {
		n++;
		i++;
		printf("%d \n",n);
	}while(i<=10);

	// boucle while ... ;
	
	printf("Donner un nombre : ");
	scanf("%d",&n);
	i=1;
	while (i<=10){
		n++;
		i++;
		printf("%d \n",n);
	}
}

//  programme qui la somme S = 1/1 + 1/2 + 1/3 +....+1/n

twentyfive (){
	float somme,i;
	int n,x=1;
	printf("donner le nombre n : ");
	scanf("%d",&n);
	somme=0;
	for(i=1;i<=n;i++){
		somme = somme + 1/i ;
	}
	printf("La somme est : %g",somme);
	
}

// programme qui calcule la somme  S = 1  + 10 + 100 + ... + pow(10,n)

twentysix(){
	float S,i;
	int n;
	const int P=10;
	printf("Donner le nombre n : ");
	scanf(" %d",&n);
	S = 0 ;
	for(i=0;i<=n;i++)
		S = S + pow(P,i);
	printf("Somme = %g",S);

}
 
  // progrmme qui calcule le factoriel d'un nombre positif non nul n!

twentyseven(){
	int N,i;
	float factorielle;
	printf("Saisir le nombre : ");
	scanf("%d",&N);
	factorielle = 1 ;
	if (N>0){
			for(i=1;i<=N;i++) 
			factorielle = factorielle * i ;	
	printf(" %d! = %g",N,factorielle);
	} else 
	printf(" math Syntax error");
}

// programme qui trait le carres des n nombre impaire (n est un nombre qui saisir par l'utilisateur

twentyeight(){
	int n,i,carre=2,x=1;
	float S;
	printf("Saisir le nombre : ");
	scanf("%d",&n);
	S = 0;
	for (i=1;i<=n;i++) {
			S = S + pow(x,carre);
			x = x + 2;
	}
	printf("Somme = %f",S);

}

//	programme qui affiche les diviseur d'un nombre entier non nul

twentynine (){
	int i,nombre,diviseurs=1;
	do {
		printf("Saisir le nombre : ");
		scanf("%d",&nombre);
	}while(nombre<=0);
		for (i =1 ; i<=nombre;i++){
			if(nombre % diviseurs == 0)
				printf(" %d est divisable par %d \n ",nombre,diviseurs);
				diviseurs++;
		}
}

// prograame qui calcule la somme d'argent d'un homme qui verse son argent dans un compte bancaire

therty(){
	int anniversaire,i;
	float somme;
	printf("Donner l'age de Amal : ");
	scanf("%d",&anniversaire);
	somme= 0 ;
	for(i=1;i<=anniversaire;i++) {
		somme = somme + 500 + i * 3;
	}
	printf("somme = %.2f",somme);
	
}

// programme mokharwan 
/* 
	cette programme ne foctionne pas car c ' est pas logique	
*/

thertyone(){
	int mr,ag,anne;
	mr=1000000;
	ag=500000;
	anne=0;
	while (mr >=  ag) {
		ag *= 1.08;
		mr +=50000;
		anne++;
	}
	printf("nombre d'annee : %d",anne);
	
}

 // prgramme qui calcule la suite Un definie par U0 = 6 et Un = 4Un-1 + 10
 
 thertytwo(){
 	int n,i;
 	int U;
	printf("Saisir le nombre : ");
	scanf("%d",&n);
	U=6;
	for (i=1;i<=n;i++){
		U =  4*U + 10;
	}
		printf("la suite U%d = %d ",n,U);
}

// programme qui calcule la suite de fibonacci

thertythree (){
	int n,i;
	float upp,up,u;
	printf("Donner un nombre : ");
	scanf("%d",&n);
	while(n<2){
			printf("Donner un nombre : ");
			scanf("%d",&n);
	}
	upp=0;
	up=1;
	printf("U0 = %g \n",upp);
	printf("U1 = %g \n",up);
	for(i=2;i<=n;i++){
		u=upp+up;
		printf("U%d = %g \n",i,u);
		upp=up;
		up=u;
	}
}

thertyfour (){
	int nbr,i,somme;
	printf("Donner un nombre : ");
	scanf("%d",&nbr);
	somme=0;
	if(nbr==2){
		printf("le nombre n'est pas premier");
	}
	for(i=2;i <=nbr;i++) {
		somme=somme+(nbr % i);
		if (somme==0){
			printf("le nombre n'est pas premier");
			break;
		}
	}
	if(somme!=0 || nbr == 1 )
			printf("le nombre est premier ");
}

// programme qui affiche le tableau de multiplication de 1 a 10

thertyfive (){
	int i,j;
	int produit;
	for(i=1;i<=10;i++)
		for(j=1;j<=10;j++){
			produit = i * j ;						
			printf(" %d\t  ",produit);
		
		}
	printf("\n");
}

// jeu a devenir a nombre


thertysix (){
	const int max=30 , min=1 ;
	int nbrAleatoir,x,i;
	srand(time(NULL));
	nbrAleatoir = (rand() % (max - min + 1)) + min ;
	printf("Hello, please type a nomber : ");
	scanf("%d",&x);

			do {
				for(i=1;i<=4;i++) {
					if(nbrAleatoir < x){
				    printf("c'est moins, try again : ");
					scanf("%d",&x);
					}
			 		if(nbrAleatoir > x) {
					printf("c'est plus, try again : ");
					scanf("%d",&x);
					}
				}
				if(nbrAleatoir == x) {
						printf("you're win great job !");
						break;
					}
				else {
					printf("You're lose ! ");
					break;
				}
			}while(i<=4);			
} 

// programme qui affiche le nombre de chiffre dans un nombre qu'il a saisir par l'utilisateur ;

// le programme n'est fonctionne pas a 100%
	thertyseven(){
		long nomber,m ;
		int resulta=0;
		printf("Saisir un nombre : ");	
		scanf("%ld",&nomber);
		m = nomber;
		// traitement qui calcule le nombre de composent de nombre "nomber"
		do {
			resulta++;
			nomber = nomber / 10 ;
		}while(nomber != 0);
		
		printf("le nombre de chiffre de qui composent le nombre %ld est :  %d",m,resulta);
	}
	
	// programme qui affiche l'inverse de nombre dans lequel l'utilisateur a entrer
	
	thertyeight(){
		int p=10 ;
		int nbr,x,xp;
		printf("donner un nombre : ");
		scanf("%d",&nbr);
		xp = nbr ;
		do {
			x=(x * p)+(nbr % 10) ;
			nbr= nbr/p;
		}while(nbr!= 0);
		printf("l'inverse de %d est : %d",xp,x);	
	}

// programme qui verifie si un nombre entier palindrome ou non

	thertynine(){
		int p=10 ;
		int nbr,nbrInverse,nbrN;
		printf("donner un nombre : ");
		scanf("%d",&nbr);
		nbrN = nbr ;
		// iversement de nombre
		do {
			nbrInverse =(nbrInverse * p)+(nbr % 10) ;
			nbr= nbr/p;
		}while(nbr!= 0);
		
		// verification sin palindrome ou non
		
		if(nbrN == nbrInverse)
		printf("Le nombre est palindrome");
		else
		printf("le nombre n'est pas palindrome");
	}

// programme qui affiche un rectangle d'etoile de n colonnes et lignes


	fourty(){
		int columns,rows;
		int i,j;
		printf("Donner le nombre de colonnes : ");
		scanf("%d",&columns);
		printf("Donner le nombre de lignes : ");
		scanf("%d",&rows);
		for(i=0;i<rows;i++){
				for(j=0;j<columns;j++)
				printf("*");	
				printf("\n");
		}
	}
		
// programme qui affiche un triangle d'etoile de n  lignes

	fourtyone(){
		int rows;
		int i,j;
		printf("Donner le nombre de lignes : ");
		scanf("%d",&rows);
		for(i=0;i<rows;i++){
				for(j=0;j<=i;j++)
				printf("*");	
				printf("\n");	
		}			
	}

// programme qui affiche un cadre d'etoile de n colonnes et lignes


	fourtytwo(){
		int columns,rows;
		int i,j;
		printf("Donner le nombre de colonnes : ");
		scanf("%d",&columns);
		printf("Donner le nombre de lignes : ");
		scanf("%d",&rows);
		for(i=1;i<=rows;i++){
				for(j=1;j<=columns;j++){
					if(i == 1 || i == rows || j == 1 || j==columns )
					printf("* ");
					else
					printf("  ");
				}
				printf("\n");
		}	
	}
	
// programme qui affiche un cadre et les deux diagonale d'un rectangle d'etoile de n colonnes et lignes


	fourtythree(){
		int columns;
		int i,j;
		printf("Donner le nombre de colonnes : ");
		scanf("%d",&columns);
		for(i=1;i<=columns;i++){
				for(j=1;j<=columns;j++){
				if(i==1 || i == columns || j==1 || j == columns || i ==j || j == columns - i +1)
				printf("* ");
				else
				printf("  ");
				}
				printf("\n");
		}	
	}
	
// programme qui affiche un losange d'etoile 

	fourtyfour(){
		int langueur;
		int i,j,s;
		printf("Donner la langueur de losange : ");
		scanf("%d",&langueur);
		for(i=0;i<langueur;i++){   
			for(s=0;s<=langueur-i-1;s++){
				printf("  ");
			}
			for(j=0;j<langueur;j++){
				printf("* ");
			}
			printf("\n");
		}
		
	}	


// programme qui affiche un triangel equilataire d'etoile

	fourthyfive(){
		int i,j,L;
		printf("Donner la langueur que vous prefere : ");
		scanf("%d",&L);
		for(i=1;i<=L;i++){
			for(j=1;j<=L-i;j++){
				printf("  ");
			}
			for(j=1;j<=(2*i-1);j++){
				if(i==L || j==1 || j==(2*i-1) )
				printf("* ");
				else 
				printf("  ");
			}
			printf("\n");
		}
		
	}
	
	// progrgramme qui affiche un triangle equilatirale inverser
	
	fourtysix(){
		int l;
		int i,j,p=1;
		printf("Donner la langueur que vous prefere : ");
		scanf("%d",&l);
		for(i=1;i<=2*l-1;i++){
			for(j=1;j<=p;j++){
				printf("* ");
			}
				if(i<l) p++;
				else p--;
			printf("\n");
		}
	}


			/*Partie des tableaux*/
			

	// programme qui affiche un tableaux de 10 entiers
			
	fourtyseven(){
		int n=10,x=0,i;
		int T[n];
		for(i=0;i<n;i++){
			T[i]=x;
			printf("T[%d] : %d \n",i+1,x);
		}
	}
	
	// programme qui affiche un tableaux contenant le six voyell de l'alphabet francais
			
	fourtyeight(){
		int n=6,i;
		char T[n]={'A','O','Y','I','E','U'};
		for(i=0;i<n;i++){
			printf("le %d voyelle est : %c \n",i+1,T[i]);
		}
	}
	
	// programme qui affiche la somme , produit et moyenne des 10 entiers qu'il a entrer par l'utilisateur
	
	fourtynine(){
		const int N=10;
		int i;
		int p,s,m;
		int table[N];
		s=0;
		p=1;
		for(i=0;i<N;i++){
			printf("Saisir le %d nombre : ",i+1);
			scanf("%d",&table[i]);
			s =s+table[i];
			p = p *table[i];
		}
		m = s/N;
		printf("La somme des nombres qu'il a saisir est : %.2f \n  Le produit des nombres qu'il a saisir est : %.2f \n La moyenne des nombres qu'il a saisir est : %.2f ",s,p,m);
	}
	
	// programme qui affiche le produit scalaire de de vecteur
	
	fivety(){
		const int n=3;
		float V[n],U[n];
		int i;
		float ps=0;
		for(i=0;i<n;i++){
			printf("donner la %d valeur du vecteur 1: ",i+1);
			scanf("%f",&V[i]);
			printf("donner la %d valeur du vecteur 2: ",i+1);
			scanf("%f",&U[i]);
		} 
		
		// traitement de produit scalair de U * V
		
		for(i=0;i<n;i++){
			ps = ps + V[i]*U[i];
		}
		printf("le produit scalair de U * V est : %.2f",ps);
	}


// programme qui affiche le min et le max d'un tableau

	fivetyone(){
		const int n=10;
		int table[n];
		int min,max,i;
		for(i=0;i<n;i++){
			printf("Saisir le %d nombre entier : ",i+1);
			scanf("%d",&table[i]);
		}
		min=table[0];
		for(i=0;i<n;i++){
			if(table[i]<min)
			min=table[i];
		}
		printf("Min = %d\n",min);
			max=table[0];
		for(i=0;i<n;i++){
			if(table[i]>max)
			max=table[i];
		}
		printf("Max = %d\n",max);
	}
	
	
	// programme qui affiche le min et le max d'un tableau


	fivetytwo(){
		const int n=10;
		int table[n];
		int i,x,a=0;
		for(i=0;i<n;i++){
			printf("Saisir le %d nombre entier : ",i+1);
			scanf("%d",&table[i]);
		}
		printf("Type the number that you need to find : ");
		scanf("%d",&x);
		
		for(i=0;i<n;i++)
			if(table[i]==x) a++;
			
			if(a != 0)
					printf("Le nombre %d se trouve dans le tableau",x);
			else
					printf("Le nombre %d ne se trouve pas dans le tableau",x);
				
	}
	
	// exercice 2 dans le controle n2 semistre 1 1ere annee DWFS bts
	
	main(){
		const int N=10;
		float note[N];
		int j,i,nbrNote=0;
		
		// remplissage de tableau
		for(i=0;i<N;i++){
			printf("Saisir la note %d : ",i+1);
			scanf("%f",&note[i]);
			if(note[i]<0 || note[i]>20){
				do{
					printf("Svp saisir un nombre entre 0 et 20 : ");
					scanf("%f",&note[i]);
					i--;
				}while(note[i]<0 && note[i]>20);
			}
		}
		// triage des note >=10
		
		for(i=0;i<N;i++)
		if(note[i]>=10)
		nbrNote++;
		printf("%d",nbrNote);
		// triet le tableau selon l'ordre decroissant
		
		for(i=0;i<N;i++)
			for(j=1;j<N-1;j++){
				if(note[j]>note[i]){
		    	float temp=note[i];
					  note[i]=note[j];
					  note[j]=temp;					
				}

			}
		// affichage de tableau de note
		
		for(i=0;i<N;i++){
			printf("note[%d] : %.2f \n",i+1,note[i]);
		}
			

	}
	
