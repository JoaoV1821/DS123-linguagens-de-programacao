#include <stdio.h>

int main(void) {
    int i;

    for (i=0; i<=10; i++) {
       
        if (i % 2 != 0) {
            printf("%d\n", i);

        } else {
            printf("%d\t", i);
        }
    }

    return 0;
}