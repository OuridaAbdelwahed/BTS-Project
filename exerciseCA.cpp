#include <stdio.h>

int produits_vendue,produits_vente,CA;

main(){
	printf("Donner le produit vendue :  ");
	scanf("%d",&produits_vendue);
	printf("Donner le produit vente : ");
	scanf("%d",&produits_vente);
	CA = produits_vendue * produits_vente;
	printf("le chaiffre d\'affaire de l\'entreprise est : %d \n",CA);
}
