/*****************************************************************//**
 * \file   ExercicioAula.c
 * \brief  
 * 
 * \author Juliana Gomes
 * \date   5 December 2020
 *********************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning (disable:4996)
int main() {
	printf("Exercicio 1\n");
	int numero1, numero2, numero3,soma;
	//pedir 3 valores
	printf("Numero 1:");
	scanf("%d", &numero1);

	printf("Numero 2:");
	scanf("%d", &numero2);

	printf("Numero 3:");
	scanf("%d", &numero3);

	soma = numero1 + numero2 + numero3;
	{
		if (numero1 < 0 || numero2 < 0 || numero3 < 0)
			printf("Impossivel");
		
		else
			printf("Soma=%d\n", soma);
	}
	//return 0;

	 {
		int somaTresValores, numero1, numero2, numero3;
		
		numero1 = 3;
		numero2 = 2;
		numero3 = 5;

		somaTresValores = numero1 + numero2 + numero3;
		printf("Soma=%d\n", somaTresValores);

	}
	 {
		 int somaTresValores, numero1, numero2, numero3;
		//pedir os valores
		 printf("Numero 1:");
		 scanf("%d", &numero1);

		 printf("Numero 2:");
		 scanf("%d", &numero2);

		 printf("Numero 3:");
		 scanf("%d", &numero3);

		//soma
		 somaTresValores= numero1 + numero2 + numero3;
		 printf("Soma=%d\n", somaTresValores);

	 }
	 {
		 float calculaMediaTresValores, numero1, numero2, numero3;

		 numero1 = 6;
		 numero2 = 2;
		 numero3 = 5;
		 //fazer a media
		 calculaMediaTresValores = (numero1 + numero2 + numero3) / 3;
		 printf("Media=%.2f\n", calculaMediaTresValores);
	 }
	 {
		 float calculaMediaTresValores, numero1, numero2, numero3;

		 printf("Numero 1:");
		 scanf("%f", &numero1);

		 printf("Numero 2:");
		 scanf("%f", &numero2);

		 printf("Numero 3:");
		 scanf("%f", &numero3);
		 //media
		 calculaMediaTresValores = (numero1 + numero2 + numero3) / 3;
		 printf("Media=%.2f\n", calculaMediaTresValores);

	 }
	 {
		 //Soma,subtraçao,multiplicaçao e divisao

		 float soma, subtracao, divisao, multiplicacao, numero1, numero2;
		//pedir numeros
		 printf("Numero 1:");
		 scanf("%f", &numero1);

		 printf("Numero 2:");
		 scanf("%f", &numero2);

		 //calculos
		 soma = numero1 + numero2;
		 subtracao = numero1 - numero2;
		 divisao = numero1 / numero2;
		 multiplicacao = numero1 * numero2;

		 //mostrar respostas
		 printf("Soma=%.f\n", soma);
		 printf("Subtracao=%.f\n", subtracao);
		 printf("Divisao=%.2f\n", divisao);
		 printf("Multiplicacao=%.f\n", multiplicacao);
	 }
}