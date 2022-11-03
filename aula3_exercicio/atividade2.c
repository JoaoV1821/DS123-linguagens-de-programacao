#include <stdio.h>

int gera_tabuada(int numero) {
    int i, produto;

    for (i=1; i<=10; i++) {
        produto = numero * i;
        printf("%d X %d = %d\n", numero, i, produto);
    }

    return 0;
}

int main (void) {
    int escolha;
     printf("Digite um numero >>>>");
     scanf("%d",&escolha);

    switch (escolha) {
        case 1:
            gera_tabuada(1);
            break;

        case 2: 
            gera_tabuada(2);
            break;

        case 3:
           gera_tabuada(3);
           break;

        case 4 :
           gera_tabuada(4);
           break;

        case 5 :
           gera_tabuada(5);
           break;
        
        case 6 :
           gera_tabuada(6);
           break;
    
        case 7 :
           gera_tabuada(7);
           break;

        case 8 :
           gera_tabuada(8);
           break;
        
        case 9 :
            gera_tabuada(9);
            break;

        case 10:
            gera_tabuada(10);
            break;
    }

    return 0;
}