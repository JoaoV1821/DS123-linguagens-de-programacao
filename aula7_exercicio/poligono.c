#include <stdio.h>
#include <math.h>

void calc_hexa(float l, float *area, float *perimetro) {
    if (l != 0) {
        *area = (3*pow(l, 2)*sqrt(3)) / 2;
        *perimetro = 6*l;
    }
}

int main(void) {
    float lado;
    float perimetro;
    float area;

    printf("Valor do lado: ");
    scanf("%f", &lado);

    if (lado == 0) {
        do
        {
            printf("lado deve ser diferente de zero: ");
            scanf("%f", &lado);
        } while (lado == 0);
        
    }

    calc_hexa(lado, &area, &perimetro );

    printf("Valor da area: %.2f\n", area);
    printf("Valor do perimetro: %.2f\n", perimetro);

    return 0;

}