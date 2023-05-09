/*
EXERCICIO 4.....................................................................
AUTOR: TULIO HENRIQUE SATURNO FECHINE...........................................
DATA: 18/05/2022................................................................

DISCIPLINA: LABORATÓRIO DE ALGORITIMO...........................................
	
UMA EMPRESA TE CONTRATOU PARA MONTAR UM PROGRAMA PARA CALCULAR A HIPOTENUSA DE
UM TRIÂNGULO, CASO O VALOR ULTRAPASSE 200M, A MESMA QUER QUE APAREÇA UMA MENSSA-
GEM INDICANDO QUE FOI EXEDIDO O TAMANHO.


*/ 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

const int LIMITE = 200;
int catetoOp, catetoAd, hipote;

main(void){
	setlocale(LC_ALL, "Portuguese");	
	printf("\Calculo de Hipotenusa de acordo com 200M\n\n");
	
	printf("Digite o Cateto Oposto: ");
	scanf("%d", &catetoOp);
	
	printf("Digite o Cateto Adjacente: ");
	scanf("%d", &catetoAd);
	
	printf("<---- PRECIONE ENTER PARA CONTINUAR ---->");
	
	getch();
	system("cls");
	
	hipote = (catetoOp * catetoOp) + (catetoAd * catetoAd);
	
	if (hipote >= LIMITE) {
		
		printf("\n\nCUIDADO!!! \n O VALOR FOI EXCEDIDO!!!");
	}
	
	printf("\n\nO valor da hipotenusa é: %dM", hipote);
	
}
