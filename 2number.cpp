#include <stdio.h>


int a, b, min, max, temp;

main() {
    printf("Entrez le premiere nombres: ");
    scanf("%d",&a);
    printf("Entrez le deuxieme nombres: ");
    scanf("%d",&b);
    
    // �change
	temp = a;
    a = b;
    b = temp;

    // le minimum et le maximum
    min = (a < b) ? a : b;
    max = (a > b) ? a : b;

    printf("Apr�s �change: a = %d, b = %d\n", a, b);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
}

