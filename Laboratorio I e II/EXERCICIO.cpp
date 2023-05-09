#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

const float PREMIO = 780000;

float pontos1, pontos2, pontos3, total, premio1, premio2, premio3;

main (void){
		setlocale(LC_ALL, "Portuguese");
	printf("$!$!$!$!$! CALCULO DE PREMIOS !$!$!$!$!$");
				//entrada de dados
	printf("\n\nDigite os pontos do candidato 1: ");
		scanf("%f", &pontos1);	
	printf("\n\nDigite os pontos do candidato 2: ");
	   	scanf("%f", &pontos2);	
	printf("\n\nDigite os pontos do candidato 3: ");
		scanf("%f", &pontos3);	
	
	
				//Processamento
				
	total = pontos1 + pontos2 + pontos3;
	premio1 = pontos1 / total * PREMIO;
	premio2 = pontos2 / total * PREMIO;
	premio3 = pontos3 / total * PREMIO;
	
		
		system("cls");
	printf("\n\nPremio do candidato 1: R$ %4.2f", premio1);
		printf("\n\n*(*(*(*(*(* Precione ENTER para continuar *)*)*)*)*)*");
	   	getch();
	   	
	   	system("cls");
	printf("\n\nPremio do candidato 2: R$ %4.2f", premio2);
		printf("\n\n*(*(*(*(*(* Precione ENTER para continuar *)*)*)*)*)*");
		getch();
		
		system("cls");
	printf("\n\nPremio do candidato 3: R$ %4.2f", premio3);
		printf("\n\n*(*(*(*(*(* Precione ENTER para continuar *)*)*)*)*)*");
		getch();
getch();			
}