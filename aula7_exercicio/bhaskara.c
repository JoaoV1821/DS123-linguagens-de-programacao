#include <stdio.h>
#include <math.h>

int raizes (float a, float b, float c, float *x1, float *x2) {
    float delta = b*b - 4 * a * c;

    if (delta < 0) {
        printf("Nao existem raizes");

    } else {
        *x1 = (-b + sqrt(delta)) / (2*a);
        *x2 = (-b - sqrt(delta)) / (2*a);
    };

    return 0;
};

int main (void) {
    float x1;
    float x2;
    float a , b, c ;

    printf("Valor de a:");
    scanf("%f", &a);

    printf("Valor de b:");
    scanf("%f", &b);

    printf("Valor de c:");
    scanf("%f", &c);


    if (a == 0) {
        do
        {
            printf("A deve ser diferente de 0:");
            scanf("%f", &a);

        }   while (a == 0);
    } 
    
    raizes(a, b, c, &x1, &x2);
    
    printf("x1: %.2f\n", x1);
    printf("x2: %.2f\n", x2);
    
    return 0;
}