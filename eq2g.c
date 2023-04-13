#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	//Declarando as variaveis
	
	int a, b, c, delta, rdelta, x1, x2, ix1, ix2;

	printf("------------------------------\n");
	printf("Equacao do 2 grau!\n");
	printf("------------------------------\n");
	
	//Recebendo os dados
	
	printf("Valor de a:\n");
	scanf("%d", &a);
	printf("Valor de b:\n");
	scanf("%d", &b);
	printf("Valor de c:\n");
	scanf("%d", &c);
	
	//Calculando o delta
	
	delta = pow(b, 2) - (4 * a * c); //b�-4ac
	
	//Calculando os X's
		
	
	if (a != 0) {
		if (delta >= 0){
			rdelta = sqrt(delta);
			x1 = ((b * -1) + rdelta) / (2*a); //-b +/- raiz do delta / 2a
			x2 = ((b * -1) - rdelta) / (2*a);
			printf("Delta: %d \nX1: %d \nX2: %d \n", rdelta, x1, x2);
			if (delta == 0){
				printf("Apenas uma Solucao real (x1 e x2 sao iguais) S: {%d}", x1);
			} else {
				printf("Delta: %d \nS: {%d, %d}", rdelta, x1, x2);
			}
		} else {
			printf("Nao existe raiz real, fazer com numeros complexos\n");
			delta *= -1;
			rdelta = sqrt(delta); //lembrar de colocar o i
			x1 = -1 * b / (2*a);
			ix1 = rdelta / 2*a;
			x2 = -1 * b / (2*a);
			ix2 = rdelta / 2*a;
			printf("S: {%d + %di, %d - %di}", x1, ix1, x2, ix2);
		}
	} else {
		printf("Equacoes do segundo grau so existem se o valor de (a) for diferente de zero");
	}
}