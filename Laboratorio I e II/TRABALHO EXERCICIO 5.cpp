/*
EXERCICIO 5.....................................................................
AUTOR: TULIO HENRIQUE SATURNO FECHINE...........................................
DATA: 18/05/2022................................................................

DISCIPLINA: LABORAT�RIO DE ALGORITIMO...........................................

UMA EMPRESA BANCARIA PRECISA DE AJUDA PARA CALCULAR O DESCONTO DO INSS PARA FUN-
CION�RIOS QUE RECEBAM UM SAL�RIO MIN�MO (7,5%), PARA QUEM RECEBE MAIS QUE UM SA-
L�RIO M�NIMO (9%).

*/ 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

const float DESCONTO_MIM = 0.075, DESCONTO_MAX = 0.09;
float salario, salarioMinimo, desconto, salarioDisc;

int main(void){
		setlocale(LC_ALL, "Portuguese");
	
	printf("####CALCULO DE DESCONTO INSS####\n\n");
	
	printf("Digite o valor atual do salario min�mo: R$ ");
	scanf("%f", &salarioMinimo);	  		
	
	printf("\n\nDigite o sal�rio do funcion�rio: R$ ");
	scanf("%f", &salario);
	
	if (salario <= salarioMinimo){
			desconto = salario * DESCONTO_MIM;
			salarioDisc = salario - desconto;
			
		printf("O sal�rio do funcion�rio �: R$%4.2f\n"
			   "O desconto ser� de: R$%4.2f\n"
			   "O sal�rio do desconto ser� de: R$%4.2f\n"
				"", salario, desconto, salarioDisc);				
			} 
			else {
					desconto = salario * DESCONTO_MAX;
					salarioDisc = salario - desconto;
					
				printf("O sal�rio do funcion�rio �: R$%4.2f\n"
					   "O desconto ser� de: R$%4.2f\n"
					   "O sal�rio do desconto ser� de: R$%4.2f\n"
						"", salario, desconto, salarioDisc);				
			}		
									  						 			
}
