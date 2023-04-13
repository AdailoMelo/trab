#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("CALCULADORA \n");
	//MENU
	int escolha;
	printf("Escolha uma das opcoes abaixo \n [1] - ADICAO \n [2] - SUBTRACAO \n [3] - MULTIPLICACAO \n [4] - DIVISAO \n [5] - RADICIACAO \n [6] - ESPONENCIACAO \n Escolha: ");
	scanf("%d", &escolha);
	
	if (escolha == 1) { //Soma
		float a, b, soma;
		int continua;

		printf("Digite um numero para ser somado: ");
		scanf("%f", &a);
		printf("Digite o outro numero a ser somado: ");
		scanf("%f", &b);
		soma = a + b;
		printf("%.2f \n", soma);
		printf("Quer continuar somando? Digite 1 para Sim ou 0 Para Nao: ");
		scanf("%d", &continua);
		while (continua == 1) {
			printf("Digite o numero a ser somado: \n");
			scanf("%f", &a);
			soma += a;
			printf("O resultado atual da soma: %.2f \n", soma);
			printf("Quer continuar somando? Digite 1 para Sim ou 0 Para Nao: ");
			scanf("%d", &continua);
		}

		printf("Fim da soma! O resultado e %.2f", soma);
	} else if (escolha == 2) { //Subtra��o
		float a, b, subtrai;
		int continua;
		printf("Digite um numero para ser subtraido: ");
		scanf("%f", &a);
		printf("Digite o outro numero a ser subtraido: ");
		scanf("%f", &b);
		subtrai = a - b;
		printf("%.2f \n", subtrai);
		
		printf("Quer continuar subtraindo? Digite 1 para Sim ou 0 Para Nao: ");
		scanf("%d", &continua);
		while (continua == 1) {
			printf("Digite o numero a ser subtraido: ");
			scanf("%f", &a);
			subtrai -= a;
			printf("O resultado atual da soma: %.2f \n", subtrai);
			printf("Quer continuar subtraindo? Digite 1 para Sim ou 0 Para Nao: ");
			scanf("%d", &continua);
		}

		printf("Fim da subtracao! O resultado final e: %.2f", subtrai);
	} else if (escolha == 3) { //Multiplica��o
		float a, b, multiplica;
		int continua;
		printf("Digite um numero para ser multiplicado: ");
		scanf("%f", &a);
		printf("Digite o outro numero a ser multiplicado: ");
		scanf("%f", &b);
		multiplica = a * b;
		printf("%.2f \n", multiplica);
		
		printf("Quer continuar multiplicando? Digite 1 para Sim ou 0 Para Nao: ");
		scanf("%d", &continua);
		while (continua == 1) {
			printf("Digite o numero a ser multiplicado: ");
			scanf("%f", &a);
			multiplica *= a;
			printf("O resultado atual da multiplicacao: %.2f \n", multiplica);
			printf("Quer continuar multiplicando? Digite 1 para Sim ou 0 Para Nao: ");
			scanf("%d", &continua);
		}

		printf("Fim da multiplicacao! O resultado final e: %.2f", multiplica);
	} else if (escolha == 4) { //Divis�o
		float a, b, divide;
		int continua;
		printf("Digite um numero para ser o numerador: ");
		scanf("%f", &a);
		printf("Digite o outro numero a ser o denominador: ");
		scanf("%f", &b);
		divide = a / b;
		printf("%.2f \n", divide);
		
		printf("Quer continuar dividindo? Digite 1 para Sim ou 0 Para Nao: ");
		scanf("%d", &continua);
		while (continua == 1) {
			printf("Digite o numero para ser o novo denominador: ");
			scanf("%f", &a);
			divide /= a;
			printf("O resultado atual da soma: %.2f \n", divide);
			printf("Quer continuar dividindo? Digite 1 para Sim ou 0 Para Nao: ");
			scanf("%d", &continua);
		}

		printf("Fim da divisao! O resultado final e: %.2f", divide);
	} else if (escolha == 5){ //Radicia��o

		float a, raiz;
		int continua;
		printf("Digite um numero para ver a sua raiz quadrada: ");
		scanf("%f", &a);
		raiz = sqrt(a);
		printf("%.2f \n", raiz);
		
		printf("Quer ver a raiz quadrada de %.2f? Digite 1 para Sim ou 0 Para Nao: ", raiz);
		scanf("%d", &continua);
		while (continua == 1) {
			raiz = sqrt(raiz);
			printf("O resultado atual da raiz quadrada: %.2f \n", raiz);
			printf("Quer ver a raiz quadrada de %.2f? Digite 1 para Sim ou 0 Para Nao: ", raiz);
			scanf("%d", &continua);
		}

		printf("Fim da radiciacao! O resultado final e: %.2f", raiz);
	} else if (escolha == 6) { //Exponencia��o
		
		float a, b, eleva;
		int continua;

		printf("Digite um numero para ser a base: ");
		scanf("%f", &a);
		printf("Digite o outro numero para ser o expoente: ");
		scanf("%f", &b);
		eleva = pow(a, b);
		printf("%.2f \n", eleva);
		
		printf("Quer elevar %.2f usando um novo expoente? Digite 1 para Sim ou 0 Para Nao: ", eleva);
		scanf("%d", &continua);
		while (continua == 1) {
			printf("Digite o numero para ser o novo expoente: ");
			scanf("%f", &a);
			eleva = pow(eleva, a);
			printf("O resultado atual e: %.2f \n", eleva);
			printf("Quer elevar %.2f usando um novo expoente? Digite 1 para Sim ou 0 Para Nao: ", eleva);
			scanf("%d", &continua);
		}

		printf("Fim da exponenciacao! O resultado final e: %.2f", eleva);
	} else {
		printf("Opcao invalida, reinicie e tente novamente \n");
	}

	return 0;
}
