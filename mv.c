#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main(){
    int escolha;
    float Pr, Po=100, x, No=1, Mr, Mo;
    printf("Calculo de meia vida de uma materia radioativa!\n");
    printf("Como voce deseja calcular a meia vida? \n[1] Porcentagem \n[2] Fracao \n[3] Massa \nEscolha: ");
    scanf("%d", &escolha);
    if (escolha == 1){
        printf("Para descobrir a porcentagem do material radioativo que resta na amostra, digite o numero de meias-vidas que passaram: ");
        scanf("%f", &x);
        Pr = Po / pow(2, x);
        printf("Se passaram %.0f meias vidas, entao ainda resta %.3f por cento do material", x, Pr);
        } else if (escolha == 2) {
        printf("Para descobrir a fracao referente ao material radioativo que resta na amostra, digite o numero de meias-vidas que passaram: ");
        scanf("%f", &x);
        printf("A fracao referente ao material que resta na amostra e: %.0f / %.0f", No, pow(2, x));
    } else if (escolha == 3) {
        printf("Para saber a massa do material radioativo que resta na amostra, digite a Massa inicial da amostra: ");
        scanf("%f", &Mo);
        printf("Agora digite o numero de meias-vidas");
        scanf("%f", &x);
        Mr = Mo / pow(2, x);
        printf("A massa restante do material radioativo e: %.2f", Mr);
    } else {
        printf("Opcao invalida, tente novamente! \n\n");
        sleep(1.5);
        main();
    }
}
