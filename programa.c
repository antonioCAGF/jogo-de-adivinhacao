#include <stdio.h>

int main() {

    // imprime cabecalho do jogo
    printf("***********************************\n");
    printf("* Bem vindo ao jogo de adivinhacao *\n");
    printf("************************************\n");

    int numeroSecreto = 42;

    int chuteDoValor;

    printf("Qual e o seu chute? ");
    scanf("%d", &chuteDoValor);
    printf("Seu chute foi %d", chuteDoValor);
}