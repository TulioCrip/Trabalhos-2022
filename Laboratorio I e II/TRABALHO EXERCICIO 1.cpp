/*
EXERCICIO 1.....................................................................
AUTOR: TULIO HENRIQUE SATURNO FECHINE...........................................
DATA: 18/05/2022................................................................
DISCIPLINA: LABORATÓRIO DE ALGORITIMO...........................................


Saulo, que mora no interior de São Paulo, deseja realizar uma viajem para o 
norte do Brasil, porem ele está com um orçamento de apenas 1000 reais  e não
não calculou a quantidade de gasolina que utilizará. Sabendo que a gasolina está
custando R$X o litro, que o carro faz Xkm por litro e a viajem será de 600 km, 
faça um código que calcule quantos litros, o valor e se Saulo conseguirá viajar.
*/

#include <stdio.h>  
#include <stdlib.h>
#include <locale.h>

	//variáveis
float precoGasolina, quilometros, totalLitros, valorTotal, orcamento, kmLitro;

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
		
	 	printf("Digite o seu orçamento: ");
		scanf("%f", &orcamento);
	    
		printf("Digite o preço da gasolina: ");
		scanf("%f", &precoGasolina);
		
		printf("Digite quantos KM de viajem: ");
		scanf("%f", &quilometros);
		
		printf("Digite quantos KM/H seu veículo faz: ");
		scanf("%f", &kmLitro);
		
		system("cls");
		
		totalLitros = quilometros / kmLitro;
		valorTotal =  precoGasolina * totalLitros * 2.00  ; 
					//calculo de totais
			printf("------------------------------\n");
			printf("| Litros necessários: %4.2f |", totalLitros);
			printf("\n------------------------------\n");	
				
			printf("------------------------------\n");
			printf("| Valor nescessário: %4.2f |", valorTotal);
			printf("\n------------------------------\n");
					//Conclusão sobre a viajem
			if (valorTotal <= orcamento) {
				
				printf("\n\n Você podera viajar com este orçamento!\n");
			}
			else if(valorTotal >= orcamento){
				
				printf("\n\n Você não podera viajar com este orçamento!\n");
			}
	system("pause");
} //fim




