#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
 printf("CALCULADORA \n");
 //MENU
 int escolha; //Variavel para escolha
 printf("Escolha uma das opcoes abaixo \n");
 printf("1 - ADICAO \n");
 printf("2 - SUBTRACAO \n");
 printf("3 - MULTIPLICACAO \n");
 printf("4 - DIVISAO \n");
 printf("5 - RADICIACAO \n");
 printf("6 - EXPONENCIACAO \n Escolha: ");
 scanf("%d", &escolha);
 if (escolha == 1) { //Se a escolha for soma
 float a, b, soma; //Criando variáveis do tipo float
 int continua, menu; //Criando variáveis do tipo int
 //Recebendo valores
 printf("Digite um numero para ser somado: ");
 scanf("%f", &a);
 printf("Digite o outro numero a ser somado: ");
 scanf("%f", &b);
 soma = a + b; //Somando
 printf("%.2f \n", soma); //Mostrando na tela
 printf("Quer continuar somando? Digite 1 para Sim ou 0 Para Nao: ");
 scanf("%d", &continua); //Verificando se o usuário quer continuar somando
 while (continua == 1) {
//Enquanto a verificação der verdadeira o bloco vai continuar pegando um valor e somando
 printf("Digite o numero a ser somado: \n");
 scanf("%f", &a);
 soma += a;
 printf("O resultado atual da soma: %.2f \n", soma);
 printf("Quer continuar somando? Digite 1 para Sim ou 0 Para Nao: ");
 scanf("%d", &continua);
 }
 printf("Fim da soma! O resultado e %.2f", soma); //Mostra na tela o resultado final
 printf("\nQuer voltar para o menu inicial? 1 - para Sim ou 0 para - Nao: ");
 scanf("%d", &menu);
 if (menu == 1) { //Reinicia o programa caso o usuário digite 1
 main();
 } else { //Finaliza caso contrário
 printf("Fim do programa");
 }
 } else if (escolha == 2) { //Se a escolha for subtracao 
 float a, b, subtrai; //Cria variáveis float
 int continua, menu; //Cria variáveis int
 //Recebe valores
 printf("Digite um numero para ser subtraido: ");
 scanf("%f", &a);
 printf("Digite o outro numero a ser subtraido: ");
 scanf("%f", &b);
 subtrai = a - b; //Subtrai os valores digitados
 printf("%.2f \n", subtrai); //Mostra o resultado na tela
 printf("Quer continuar subtraindo? Digite 1 para Sim ou 0 Para Nao: ");
 scanf("%d", &continua);
 while (continua == 1) { //Repetição de subtração caso o usuário queira continuar 
 printf("Digite o numero a ser subtraido: ");
 scanf("%f", &a);
 subtrai -= a;
 printf("O resultado atual da soma: %.2f \n", subtrai);
 printf("Quer continuar subtraindo? Digite 1 para Sim ou 0 Para Nao: ");
 scanf("%d", &continua);
 }
 printf("Fim da subtracao! O resultado final e: %.2f", subtrai);
 printf("\nQuer voltar para o menu inicial? 1 - para Sim ou 0 para - Nao: ");
 scanf("%d", &menu);
 if (menu == 1) { //Reinicia o programa caso o usuário digite 1
 main();
 } else {
 printf("Fim do programa");
 }
 } else if (escolha == 3) { //Se a escolha for multiplicacao
 float a, b, multiplica; //variáveis float
 int continua, menu; // variáveis int
 //Recebe dados
 printf("Digite um numero para ser multiplicado: ");
 scanf("%f", &a);
 printf("Digite o outro numero a ser multiplicado: ");
 scanf("%f", &b);
 multiplica = a * b; //Operacao
 printf("%.2f \n", multiplica); //Mostra na tela
 printf("Quer continuar multiplicando? Digite 1 para Sim ou 0 Para Nao: ");
 scanf("%d", &continua);
 while (continua == 1) { //Repeticao da multiplicação
 printf("Digite o numero a ser multiplicado: ");
 scanf("%f", &a);
 multiplica *= a; //multiplica = multiplica * a
 printf("O resultado atual da multiplicacao: %.2f \n", multiplica);
 printf("Quer continuar multiplicando? Digite 1 para Sim ou 0 Para Nao: ");
 scanf("%d", &continua);
 }
 printf("Fim da multiplicacao! O resultado final e: %.2f", multiplica); //Mostra resultado
 printf("\nQuer voltar para o menu inicial? 1 - para Sim ou 0 para - Nao: ");
 scanf("%d", &menu);
 if (menu == 1) { //Renicia caso menu == 1
 main();
 } else {
 printf("Fim do programa");
 }
 } else if (escolha == 4) { 
 float a, b, divide; //Variaveis float
 int continua, menu; //Variaveis int
 //Recebe valores
 printf("Digite um numero para ser o numerador: ");
 scanf("%f", &a);
 printf("Digite o outro numero a ser o denominador: ");
 scanf("%f", &b);
 divide = a / b;
 printf("%.2f \n", divide);
 printf("Quer continuar dividindo? Digite 1 para Sim ou 0 Para Nao: ");
 scanf("%d", &continua);
 while (continua == 1) { //Repetição da divisão com novo denominador
 printf("Digite o numero para ser o novo denominador: ");
 scanf("%f", &a);
 divide /= a;
 printf("O resultado atual da soma: %.2f \n", divide);
 printf("Quer continuar dividindo? Digite 1 para Sim ou 0 Para Nao: ");
 scanf("%d", &continua);
 }
 printf("Fim da divisao! O resultado final e: %.2f", divide);
 printf("\nQuer voltar para o menu inicial? 1 - para Sim ou 0 para - Nao: ");
 scanf("%d", &menu);
 if (menu == 1) { //Reinicia caso menu == 1
 main();
 } else {
 printf("Fim do programa");
 }
 } else if (escolha == 5){ //Escolha sendo radiciação
 float a, raiz; //variáveis float
 int continua, menu; //variáveis int
 printf("Digite um numero para ver a sua raiz quadrada: ");
 scanf("%f", &a); //Recebe valor para a
 raiz = sqrt(a); //raiz recebe a raiz quadrada de a
 printf("%.2f \n", raiz); //mostra na tela o resultado
 printf("Quer ver a raiz quadrada de %.2f? Digite 1 para Sim ou 0 Para Nao: ", raiz);
 scanf("%d", &continua);
 while (continua == 1) { //Repetição radiciação
 raiz = sqrt(raiz);
 printf("O resultado atual da raiz quadrada: %.2f \n", raiz);
 printf("Quer ver a raiz quadrada de %.2f? Digite 1 para Sim ou 0 Para Nao: ", raiz);
 scanf("%d", &continua);
 }
 printf("Fim da radiciacao! O resultado final e: %.2f", raiz);
 printf("\nQuer voltar para o menu inicial? 1 - para Sim ou 0 para - Nao: ");
 scanf("%d", &menu); //Mostra o resultado na tela
 if (menu == 1) { //Reseta o programa caso menu == 1
 main();
 } else {
 printf("Fim do programa");
 }
 } else if (escolha == 6) { 
 float a, b, eleva; //variáveis float
 int continua, menu; //variáveis int
 //recebe valores
 printf("Digite um numero para ser a base: ");
 scanf("%f", &a);
 printf("Digite o outro numero para ser o expoente: ");
 scanf("%f", &b);
 eleva = pow(a, b); //eleva recebe a elevado a b
 printf("%.2f \n", eleva); //mostra resultado
 printf("Quer elevar usando um novo expoente? 1- Sim, 0 - Nao: ");
 scanf("%d", &continua);
 while (continua == 1) { //Repetição exponenciação
 printf("Digite o numero para ser o novo expoente: ");
 scanf("%f", &a);
 eleva = pow(eleva, a);
 printf("O resultado atual e: %.2f \n", eleva);
 printf("Elevar %.2f usando novo expoente? 1 para Sim ou 0 Para Nao: ", eleva);
 scanf("%d", &continua);
 }
 printf("Fim da exponenciacao! O resultado final e: %.2f", eleva);
 printf("\nQuer voltar para o menu inicial? 1 - para Sim ou 0 para - Nao: ");
 scanf("%d", &menu);
 if (menu == 1) { //Reinicia caso menu == 1
 main();
 } else {
 printf("Fim do programa");
 }
 } else { //Reinicia caso o usuário digite uma opção inválida
 printf("Opcao invalida, tente novamente \n");
 main();
 }
}