#include <stdio.h>

int main(){

    int torre = 1, bispo = 1, rainha = 1;
    
    printf("Movimento da Torre:\n");

    while (torre <= 5)
    {
        printf("Direita\n");
        torre++;
    }
    
    printf("Movimento da Rainha: \n");

    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
    
    printf("Movimento do bispo: \n");

    for ( bispo = 1; bispo <= 5; bispo++)
    {
        printf("Cima, direita\n");
    }
    

    return 0;
}