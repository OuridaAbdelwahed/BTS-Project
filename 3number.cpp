#include <stdio.h>
int a, b, c, min, max,temp;

main() {
    printf("Entrez le premiere nombre: ");
    scanf("%d",&a);
    printf("Entrez le deuxieme nombre: ");
    scanf("%d",&b);
    printf("Entrez le troisieme nombre: ");
    scanf("%d",&c);
    
    // Échange 
    temp = a;
    a = b;
    b = c;
    c = temp;

    // le minimum et le maximum
    min = (a < b && a < c) ? a : (b < c ? b : c);
    max = (a > b && a > c) ? a : (b > c ? b : c);

    printf("Apres echange: a = %d, b = %d, c = %d\n", a, b, c);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
}

