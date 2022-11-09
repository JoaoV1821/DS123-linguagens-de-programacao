#include <stdio.h>
#include <string.h>

int main (void) {
    char codigo[0];
    double valorPrestacao, valorTotal, desconto;
    unsigned const int prestacao = 15;
    
    printf("Digite o valor total da compra >>>> ");
    scanf("%lf",&valorTotal);

    printf("Digite o codigo da compra >>>> ");
    scanf("%s",&codigo);

    while (1) {
        if (strcmp(codigo, "P") == 0 || strcmp(codigo, "p") == 0) {
            valorPrestacao = valorTotal / prestacao;
            printf("Valor das prestacoes: R$%.2lf", valorPrestacao);
            break;

        } else if (strcmp(codigo, "V") == 0 || strcmp(codigo, "v") == 0) {
            desconto = valorTotal  - ((valorTotal * 15) / 100);
            
            printf("Valor a vista: R$%.2lf", desconto);
            break;

        } else {
            printf("Codigo invalido! Tente novamente\n");
            printf("Digite o codigo da compra >>>> ");
            scanf("%s",&codigo);
            continue;
        }
    }

    return 0;
}
