/* 
EXERCICIO 2.....................................................................
AUTOR: TULIO HENRIQUE SATURNO FECHINE...........................................
DATA: 18/05/2022................................................................

DISCIPLINA: LABORAT�RIO DE ALGORITIMO...........................................

Uma empresa precisa de ajuda para calcular a velocidade m�dia de seus veiculo, 
facilitando a sepra��o de categoria de seus ve�culos. Para isso eles te contra-
taram para fazer um programa que calcule a velocidade m�dia de um produto, mas,
se o carro bater uma VM menor que valor X, eles precisam que separe em grupo A e,
caso seja maior, separe em grupo B.

*/ 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
	//vari�veis
float veloNesc, veloMedia, espacoInicial, espacoFinal, tempoInicial, tempoFinal;

main(void){
		setlocale(LC_ALL, "Portuguese");
	printf("*****SEPARA��O DE GRUPOS*****");
	printf("\n\n Este programa calcula a velocidade m�dia de um ve�culo e o"
		   "separa em grupos A e B."
		   "\n\n [A] para veiculos com Vm menor que a nescess�ria e [B]" 
		   "para ve�culos com VM maior que a nescess�ria"
	       "\n\n<-----PRECIONE ENTER PARA CONTINUAR----->");
     getch();
	system("cls");
			
	//entrada de dados
	printf("\nDigite a VM nescess�ria: ");
	scanf("%f", &veloNesc);	
		printf("<---- PRECIONE ENTER PARA CONTINUAR ---->");
		
	system("cls");	
	
		printf("\n\n<----{Informe os espa�os para calcular a diferen�a}---->\n\n");
		
	printf("\nDigite o espa�o inicial: ");
	scanf("%f", &espacoInicial);

	printf("\nDigite o espa�o final: ");
	scanf("%f", &espacoFinal);
		printf("<---- PRECIONE ENTER PARA CONTINUAR ---->");
	
	system("cls");
	
		printf("\n\n<----{Informe o Tempo para calcular a diferen�a}---->\n\n");
		
	printf("\nDigite o tempo inicial: ");
	scanf("%f", &tempoInicial);
	
	printf("\nDigite o tempo final: ");
	scanf("%f", &tempoFinal);
	
		printf("<---- PRECIONE ENTER PARA CONTINUAR ---->");
	
	system("cls");
	
	//processamento
veloMedia = (espacoInicial - espacoFinal) / (tempoInicial - tempoFinal);

		printf("VM nescess�ria: %4.2f m/s\n\n", veloNesc);
		
		if (veloMedia <= veloNesc){
			printf("\nSeu ve�culo atingiu %4.2f m/s, ent�o o mesmo pertence ao" 
			", grupo A\n", veloMedia);
		}
			else{
				printf("\nSeu ve�culo atingiu %4.2f m/s, ent�o o mesmo pertence" 
				"ao grupo B\n", veloMedia);
			}
}	//fim	
		





