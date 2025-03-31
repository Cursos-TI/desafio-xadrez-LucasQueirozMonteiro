#include <stdio.h>

void movertorre(int casast){
    if (casast > 0)
    {
        printf("Direita\n");
        movertorre(casast - 1);
    }
    
}
void moverRainha(int casasr){
        if (casasr > 0)
        {
            printf("Esquerda\n");
            moverRainha(casasr -1);
        }
        

    }
void moverBispo(int casasb){
    if (casasb > 0)
    {
        
        for (int j = 0, i = 0; i < 1; i++)
        {
            printf("Cima ");
            while (j < 1 )
            {
                printf("Direita\n");
                j++;
            }
            
        }
        moverBispo(casasb - 1);
    }
}
void moverCavalo(int casasC){
    if (casasC > 0)
    {
        for (int i = 0, j = 0; i < 1; i++)
    {
        
        do
        {
            printf("Cima\n");
            j++;
        } while (j <= 1);
        printf("Direita\n");
    }
    
    }
    
}

int main(){
    
    int casast = 5, casasR = 8, casasB = 5, casasC;

    printf("Movimeno da Torre: \n");
    movertorre(casast);

    printf("Movimento da Rainha: \n");
    moverRainha(casasR);

    printf("Movimento do Bispo: \n");
    moverBispo(casasB);

    printf("Movimento Cavalo: \n");
    moverCavalo(casasC);

    return 0;
}