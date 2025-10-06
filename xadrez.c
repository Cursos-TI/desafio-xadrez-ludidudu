#include <stdio.h>

int main(){

    int bispo = 1, rainha = 1;

    for (int torre = 1; torre <= 5; torre++) {
        if (torre == 1){
            printf("Torre se moveu %d vez para direita \n", torre);
        } else {
        printf("Torre se moveu %d vezes para direita \n", torre);
        }
    }

    while (bispo <= 5) {
        if (bispo % 2 != 0){
            printf("\nBispo se moveu para cima %d ", bispo);
            bispo++;
        } else {
            printf("\nBispo se moveu para direita %d ", bispo);
            bispo++;
        }
    }

    do {
        printf("\nA rainha se moveu para esquerda %d ", rainha);
        rainha++;
    } while (rainha <= 8);

    return 0;

}