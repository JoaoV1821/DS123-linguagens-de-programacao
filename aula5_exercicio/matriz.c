#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void) {
    int i,j;
    const int tamanho = 10;
    const int time = 500;

    int matrizA[tamanho][tamanho];
    int matrizB[tamanho][tamanho];

    while (1) {
        for (i = 0; i < tamanho; i++) {
            for (j = 0; j < tamanho; j++) {
                   matrizA[i][j] = rand() % 2;
                   matrizB[i][j] = rand() % 2;
                }
        }

        for (i = 0; i < tamanho; i++)
        {
            for (j = 0; j < tamanho; j++)
            {   
                if (matrizA[i][j] == matrizB[i][j] ) {
                    printf("%d\t",matrizA[i][j] );
                    

                } else {
                    printf("-\t");
                }
            } 

            printf("\n");
        }

        Sleep(time);

        system("cls");
    }
        

    return 0;
    
}