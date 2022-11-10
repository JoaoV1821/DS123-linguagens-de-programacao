#include <stdio.h> 

int main (void) {
    float celsius;
    int f;

    printf("Digite o valor em Farenheit >>>> ");
    scanf("%d",&f);

    celsius = (f - 32) / 1.8;

    printf("Valor em celsius: %.2lf", celsius);
}