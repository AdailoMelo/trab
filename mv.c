#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main(){
    int escolha;
    float Pr, Po=100, x;
    printf("Calculo de meia vida de uma materia radioativa!\n");
    printf("Como voce deseja calcular a meia vida? \n[1] Porcentagem \n[2] Fracao \n[3] Massa \nEscolha: ");
    scanf("%d", &escolha);
    if (escolha == 1){
        printf("Para descobrir a porcentagem do material radioativo que resta na atmosfera, digite o numero de meias-vidas que passaram: ");
        scanf("%f", &x);
        Pr = Po / pow(2, x);
        printf("Se passaram %.0f meias vidas, entao ainda resta %.3f por cento do material", x, Pr);
        } else if (escolha == 2) {
        printf("Faca isso");
    } /* else if (escolha == 3) {
        printf("Faca isso");
    } else {
        printf("Opcao invalida, tente novamente! \n\n");
        sleep(1.5);
        main();*/
    }
