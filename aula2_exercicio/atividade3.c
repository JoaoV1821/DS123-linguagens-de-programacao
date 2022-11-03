#include <stdio.h>

int main (void) { // Declaração da função principal com parâmetro vazio
    int i; // Variável de iteração

    for (i=1; i<=10; i++) { // Início do laço for
        if (i % 2 == 0) { // Verifica se o número é par
            printf("%d\t", i); // Se for cria a tabulação
        }  else {
            printf("%d\n", i); // Senão imprime sem a tabulação a direita
        }
    }
    return 0;
}