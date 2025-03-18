#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

//Declaraçõs das váriaveis de identificação das peças;
   char torre[10] = "Torre";
   char bispo[10] = "Bispo";
   char rainha[10] = "Rainha";
   char cavalo[10] = "Cavalo";


//Movimento da Torre usando for;
   printf("Movimento da %s por 5 casas:\n", torre);
   int t;                              //Contador int pra simular o movimento da Torre;
   for(t = 0; t < 5; t++){
        printf("Casa %d: Direita\n", t +1);
   }


//Movimento do Bispo usando While;     

    printf("\nMovimento do %s por 5 casas na Diagonal (Cima, Direita):\n", bispo);
    int b = 0;                               //Contador int pra simular o movimento do Bispo;
    while(b < 5){
        printf("Casa %d: Cima, Direita\n", b+1);
        b++;
    }

//Movimento da Rainha usando do-Whilee;

    printf("\nMovimento da %s por 8 casas para a esquerda:\n", rainha);
    int r = 0;                              //Contador int pra simular o movimento da Rainha;
    do{
        printf("Casa %d: Esquerda\n", r + 1);
        r++;
    }while(r < 8 );


//Movimento do Cavalo usando, Estrutura aninhada(for, do-While);

    printf("\nMovimento do %s por 2 casas verticais e um movimento horizontal:\n", cavalo);
    int c, e;    //Declaração de váriaveis;

    //Loop for pro movimento vertical;
    for(c = 0; c < 2; c++){

    printf("Casa %d: Baixo\n", c + 1);

    if(c == 1){
        e = 0;
        
        do{
            printf("Casa %d: Esquerda\n", c + e + 2);
            e++;
        }while( e < 1);
    }
}

    return 0;
}
