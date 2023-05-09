/* 
EXERCICIO 2.....................................................................
AUTOR: TULIO HENRIQUE SATURNO FECHINE...........................................
DATA: 18/05/2022................................................................

DISCIPLINA: LABORATÓRIO DE ALGORITIMO...........................................

Uma empresa precisa de ajuda para calcular a velocidade média de seus veiculo, 
facilitando a sepração de categoria de seus veículos. Para isso eles te contra-
taram para fazer um programa que calcule a velocidade média de um produto, mas,
se o carro bater uma VM menor que valor X, eles precisam que separe em grupo A e,
caso seja maior, separe em grupo B.

*/ 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
	//variáveis
float veloNesc, veloMedia, espacoInicial, espacoFinal, tempoInicial, tempoFinal;

main(void){
		setlocale(LC_ALL, "Portuguese");
	printf("*****SEPARAÇÃO DE GRUPOS*****");
	printf("\n\n Este programa calcula a velocidade média de um veículo e o"
		   "separa em grupos A e B."
		   "\n\n [A] para veiculos com Vm menor que a nescessária e [B]" 
		   "para veículos com VM maior que a nescessária"
	       "\n\n<-----PRECIONE ENTER PARA CONTINUAR----->");
     getch();
	system("cls");
			
	//entrada de dados
	printf("\nDigite a VM nescessária: ");
	scanf("%f", &veloNesc);	
		printf("<---- PRECIONE ENTER PARA CONTINUAR ---->");
		
	system("cls");	
	
		printf("\n\n<----{Informe os espaços para calcular a diferença}---->\n\n");
		
	printf("\nDigite o espaço inicial: ");
	scanf("%f", &espacoInicial);

	printf("\nDigite o espaço final: ");
	scanf("%f", &espacoFinal);
		printf("<---- PRECIONE ENTER PARA CONTINUAR ---->");
	
	system("cls");
	
		printf("\n\n<----{Informe o Tempo para calcular a diferença}---->\n\n");
		
	printf("\nDigite o tempo inicial: ");
	scanf("%f", &tempoInicial);
	
	printf("\nDigite o tempo final: ");
	scanf("%f", &tempoFinal);
	
		printf("<---- PRECIONE ENTER PARA CONTINUAR ---->");
	
	system("cls");
	
	//processamento
veloMedia = (espacoInicial - espacoFinal) / (tempoInicial - tempoFinal);

		printf("VM nescessária: %4.2f m/s\n\n", veloNesc);
		
		if (veloMedia <= veloNesc){
			printf("\nSeu veículo atingiu %4.2f m/s, então o mesmo pertence ao" 
			", grupo A\n", veloMedia);
		}
			else{
				printf("\nSeu veículo atingiu %4.2f m/s, então o mesmo pertence" 
				"ao grupo B\n", veloMedia);
			}
}	//fim	
		





