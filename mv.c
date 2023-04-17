#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
 int escolha; //variável para escolher no menu
 float Pr, Po=100, x, No=1, Mr, Mo; //variáveis tipo float
 printf("Calculo de meia vida de uma materia radioativa!\n");
 printf("Escolha: \n[1] Porcentagem \n[2] Fracao \n[3] Massa \nEscolha: ");
 scanf("%d", &escolha); //Recebendo um valor pelo teclado
 if (escolha == 1){ //Porcentagem restante
 printf("Digite o numero de meias-vidas que passaram: ");
 scanf("%f", &x); //Recebendo o numero de meias vidas
 Pr = Po / pow(2, x); //Calculando a porcentagem restante
 printf("Ainda resta %.3f por cento do material", Pr); //Mostrando o resultado na tela
 } else if (escolha == 2) { //Fração referente ao material restante na amostra
 printf("Digite o numero de meias-vidas que passaram: ");
 scanf("%f", &x); //Recebendo o numero de meias vidas
 printf("A fracao que resta na amostra e: %.0f / %.0f", No, pow(2, x)); //resultado na tela
 } else if (escolha == 3) { //Massa restante na amostra
 printf("Digite a Massa inicial da amostra: ");
 scanf("%f", &Mo); //Recebendo o valor da massa inicial
 printf("Agora digite o numero de meias-vidas: ");
 scanf("%f", &x); //Recebendo a quantidade de meias vidas
 Mr = Mo / pow(2, x); //Calculando a massa restante (Mr)
 printf("A massa restante do material radioativo e: %.2f", Mr);
 } else { //Nenhuma opção valida digitada, reinicia o programa
 printf("Opcao invalida, tente novamente! \n\n");
 main();
 }
}
