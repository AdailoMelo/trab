/*
Adailo de Melo sousa
Witalo perera dos santos
Camilly ribeiro figueiredo
Pedro henrique moreira
José gomes albuquerque moreira neto
Francisco erico reis
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	//LAB 01
	float a=1, b=2, c=3, d=4, e=5;
	float dias;
	float n1;
	float n2;
	//EX001
	printf("Exercicio 1: \n");
	printf("%.2f \n", 2*a*b+10); //2ab+10
	printf("%.2f \n", a*b/c); //ab/c
	printf("%.2f \n", a/b/c);//a/b/c
	//EX002
    printf("Digite uma quantidade de dias: ");
    scanf("%f", & dias);
    printf("%.0f dia(s) equvalem a %.2f ano(s)\n", dias, dias/365);
    //EX003
	printf("Primeira nota: ");
	scanf("%f", & n1);
	while (n1 > 10 || n1 < 0) {
		printf("As notas vao de 0 a 10, digite a nota: ");
		scanf("%f", & n1);
	}
	printf("Segunda nota: ");
	scanf("%f", & n2);
	
	while (n2 > 10 || n1 < 0) {
		printf("As notas vao de 0 a 10, digite a nota: ");
		scanf("%f", & n2);
	}
	
	float y = (n1+n2) / 2;
	
	if (y >= 7){
		printf("Media = %.2f, aprovado \n", y);
	} else {
		printf("Media = %.2f, aguardando a prova final \n", y);
	}
	
	system("pause");
}


