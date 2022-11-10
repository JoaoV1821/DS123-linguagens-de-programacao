#include <stdio.h>

int main(void) {
    int i;
    int cont = 0;
    for (i = 15; i <=187; i++) {
        if (i % 11 == 0) {
            cont++;
        }
    }

    printf("%d", cont);

    return 0;
}