/*
EXERCICIO 5.....................................................................
AUTOR: TULIO HENRIQUE SATURNO FECHINE...........................................
DATA: 18/05/2022................................................................

DISCIPLINA: LABORATÓRIO DE ALGORITIMO...........................................

UMA EMPRESA BANCARIA PRECISA DE AJUDA PARA CALCULAR O DESCONTO DO INSS PARA FUN-
CIONÁRIOS QUE RECEBAM UM SALÁRIO MINÍMO (7,5%), PARA QUEM RECEBE MAIS QUE UM SA-
LÁRIO MÍNIMO (9%).

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
	
	printf("Digite o valor atual do salario minímo: R$ ");
	scanf("%f", &salarioMinimo);	  		
	
	printf("\n\nDigite o salário do funcionário: R$ ");
	scanf("%f", &salario);
	
	if (salario <= salarioMinimo){
			desconto = salario * DESCONTO_MIM;
			salarioDisc = salario - desconto;
			
		printf("O salário do funcionário é: R$%4.2f\n"
			   "O desconto será de: R$%4.2f\n"
			   "O salário do desconto será de: R$%4.2f\n"
				"", salario, desconto, salarioDisc);				
			} 
			else {
					desconto = salario * DESCONTO_MAX;
					salarioDisc = salario - desconto;
					
				printf("O salário do funcionário é: R$%4.2f\n"
					   "O desconto será de: R$%4.2f\n"
					   "O salário do desconto será de: R$%4.2f\n"
						"", salario, desconto, salarioDisc);				
			}		
									  						 			
}
