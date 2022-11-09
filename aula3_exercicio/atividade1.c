#include <stdio.h>

int main (void) {
    long int populacaoA = 5000000;
    long int populacaoB = 7000000;
    float porcentagemA;
    float porcentagemB;
    
    int anos = 0;     

    while (populacaoA < populacaoB) {
        porcentagemA = (populacaoA * 3) / 100;
        porcentagemB = (populacaoB * 2) / 100;
        
        populacaoA = populacaoA + porcentagemA;
        populacaoB = populacaoB + porcentagemB;

        anos++;
    } 
    
    printf("Tempo necessario: %d anos\n", anos);

}