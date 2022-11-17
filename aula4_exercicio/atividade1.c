#include <stdio.h>

int main(void) {
    int idadePedro, idadeJoana;

    while (1)
    {
        printf("Digite a idade de Pedro >>>>");
        scanf("%d",&idadePedro);
        printf("Digite a idade de Joana >>>>");
        scanf("%d",&idadeJoana);

        if (idadePedro == idadeJoana) {
            printf("Erro: as idades precisam ser diferentes!\n");
            continue;
            
        } else {
            break;    
        }
    }

        if (idadeJoana > idadePedro) {
            printf("Joana e mais velha");

        } else {
            printf("Pedro e mais velho");
        }
}