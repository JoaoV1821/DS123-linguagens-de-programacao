#include <stdio.h>
#include <math.h>

int raizes (float a, float b, float c, float *x1, float *x2) {
    float delta = b*b - 4 * a * c;

    *x1 = (-b + sqrt(delta)) / (2*a);
    *x2 = (-b - sqrt(delta)) / (2*a);

    return 0;
}


int main(void) {
    float x1;
    float x2;
    float a = 1, b = 12, c = -13;

    raizes(a, b, c, &x1, &x2);

    printf("%.2f\n", x1);
    printf("%.2f\n", x2);

    return 0;
}