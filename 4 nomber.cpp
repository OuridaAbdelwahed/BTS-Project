#include <stdio.h>
#include <cmath>
#include <math.h>
int a, b, c, d, min, max;
main() {

    printf("Entrez le premiere nombres: ");
    scanf("%d",&a);
    printf("Entrez le deuxieme nombre: ");
    scanf("%d",&b);
    printf("Entrez le troisieme nombre: ");
    scanf("%d",&c);
    printf("Entrez le quatrieme nombre: ");
    scanf("%d",&d);

    // Échange
	//	temp = a;
	//    a = b;
	//    b = c;
	//    c = d;
	//    d = temp;

    // le minimum et le maximum
    
    min = (a < b && a < c && a < d) ? a : (b < c && b < d ? b : (c < d ? c : d));
    max = (a > b && a > c && a > d) ? a : (b > c && b > d ? b : (c > d ? c : d));

	//printf("changement: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d", max);
}

