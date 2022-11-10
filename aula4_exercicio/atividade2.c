#include <stdio.h>

int main (void) {
    int a, b, c;

    printf("Digite o lado A >>>>");
    scanf("%d",&a);

    printf("Digite o lado B >>>>");
    scanf("%d",&b);

    printf("Digite o lado C >>>>");
    scanf("%d",&c);

    if (a == b && b == c )  {
        printf("Triangulo equilatero");

    } else if ( ((a == b) || ((a == c)) || ((b == c))) ) {
        printf("Triangulo isoceles");

    } else if (a != b && b != c && c != a) {
        printf("Triangulo escaleno");
    } 
}