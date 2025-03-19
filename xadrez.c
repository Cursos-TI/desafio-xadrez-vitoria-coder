#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.



//Declarações das funções recursivas pros movimentos das peças;
void moveTorre(int casa){
    if(casa == 0) return;
    printf("Mover 1 casa pra direita\n");
    moveTorre(casa - 1);
}

void moveBispo(int casa){
    if(casa == 0) return;
    for(int i = 0; i < casa; i++){
        for(int j = 0; j < casa; j++){
            printf("Mover 1 casa na diagonal superior direita\n");
        }
    }
    moveBispo(casa -1);
}

void moveRainha(int casa){
    if(casa == 0) return;
    printf("Mover 1 casa pra direita\n");
    moveRainha(casa -1);
}

void movimentoCavalo(int movimento){
    for (int i = 0; i < movimento; i++){
        for (int j = 0; j < 2; j++){
            printf("Mover 1 casa pra cima\n");
            if(j == 1) break;               ///após mover as duas casas interrompe o loop;
        }

        printf("Mover 1 casa pra direita\n");
        continue;   //continua pro próximo movimento;
    }
}

int main() {


//Números de casas que cada peça deve se movimentar;

    int casaTorre = 3;
    int casaBispo = 3;
    int casaRainha = 3;
    int movimentosCavalo = 2;

    printf("Movimento da Torre:\n");
    moveTorre(casaTorre);
    printf("\n");

    printf("Movimnto do Bispo:\n");
    moveBispo(casaBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moveRainha(casaRainha);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    movimentoCavalo(movimentosCavalo);
    printf("\n");




    return 0;
}