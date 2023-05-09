/*
EXERCICIO 1.....................................................................
AUTOR: TULIO HENRIQUE SATURNO FECHINE...........................................
DATA: 18/05/2022................................................................
DISCIPLINA: LABORAT�RIO DE ALGORITIMO...........................................


Saulo, que mora no interior de S�o Paulo, deseja realizar uma viajem para o 
norte do Brasil, porem ele est� com um or�amento de apenas 1000 reais  e n�o
n�o calculou a quantidade de gasolina que utilizar�. Sabendo que a gasolina est�
custando R$X o litro, que o carro faz Xkm por litro e a viajem ser� de 600 km, 
fa�a um c�digo que calcule quantos litros, o valor e se Saulo conseguir� viajar.
*/

#include <stdio.h>  
#include <stdlib.h>
#include <locale.h>

	//vari�veis
float precoGasolina, quilometros, totalLitros, valorTotal, orcamento, kmLitro;

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
		
	 	printf("Digite o seu or�amento: ");
		scanf("%f", &orcamento);
	    
		printf("Digite o pre�o da gasolina: ");
		scanf("%f", &precoGasolina);
		
		printf("Digite quantos KM de viajem: ");
		scanf("%f", &quilometros);
		
		printf("Digite quantos KM/H seu ve�culo faz: ");
		scanf("%f", &kmLitro);
		
		system("cls");
		
		totalLitros = quilometros / kmLitro;
		valorTotal =  precoGasolina * totalLitros * 2.00  ; 
					//calculo de totais
			printf("------------------------------\n");
			printf("| Litros necess�rios: %4.2f |", totalLitros);
			printf("\n------------------------------\n");	
				
			printf("------------------------------\n");
			printf("| Valor nescess�rio: %4.2f |", valorTotal);
			printf("\n------------------------------\n");
					//Conclus�o sobre a viajem
			if (valorTotal <= orcamento) {
				
				printf("\n\n Voc� podera viajar com este or�amento!\n");
			}
			else if(valorTotal >= orcamento){
				
				printf("\n\n Voc� n�o podera viajar com este or�amento!\n");
			}
	system("pause");
} //fim




