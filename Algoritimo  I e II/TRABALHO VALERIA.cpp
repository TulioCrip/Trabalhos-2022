#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()//Inicio
{
				setlocale(LC_ALL, "Portuguese");		
				// variáveis				
	float precoTotal, precoQuilo, quiloDoce;
	char tipoDoce;
	
				//menu de apresentação e entrada de dados
		printf("\nInforme quantos quilos de doce para começar o calculo: \n---> "); 
	   	scanf("%f", &quiloDoce);
		   			
	printf("|-----------------------------------|\n"
		   "|Escolha o tipo de doce:            |\n"
		   "| [1] - Trufa de nozes com chocolate|\n"
		   "| [2] - Torta mousse de limão       |\n"
		   "| [3] - Bolo de brigadeiro          |\n"
		   "| [4] - Cookie de nutella           |\n"
		   "|-----------------------------------|\n");
		   printf("---> ");
	tipoDoce = getche();
	system("cls");
	  	  	  //processamento
   	switch(tipoDoce){
		case '1':
			if (quiloDoce <= 5){
				precoQuilo = 25.00;
				precoTotal = precoQuilo * quiloDoce;
			   	}
				else {
					precoQuilo = 22.00;
				   	precoTotal = precoQuilo * quiloDoce;		
				}
				printf("\n*Trufa de nozes com chocolate*\n\n"
			    		   " Pedido: %4.2f KG\n"
						   " Preço por KG: R$%4.2f\n"
						   " Preço total: R$%4.2f\n\n"
					"", quiloDoce, precoQuilo, precoTotal);
			break;
		case '2': 
			if (quiloDoce <= 5){
				precoQuilo = 24.45;
				precoTotal = precoQuilo * quiloDoce;
			   	}
				else {
					precoQuilo = 22.45;
					precoTotal = precoQuilo * quiloDoce;
					
				}
				printf("\n*Torta mousse de limão*\n\n"
			    		   " Pedido: %4.2f KG\n"
						   " Preço por KG: R$%4.2f\n"
						   " Preço total: R$%4.2f\n\n"
					"", quiloDoce, precoQuilo, precoTotal);				

			break;
		case '3':
			if (quiloDoce <= 5){
				precoQuilo = 35.00;
				precoTotal = precoQuilo * quiloDoce;
			   	}
				else {
					precoQuilo = 30.00;
					precoTotal = 30.00 * quiloDoce;
					
				}
				printf("\n*Bolo de brigadeiro*\n\n"
			    		   " Pedido: %4.2f KG\n"
						   " Preço por KG: R$%4.2f\n"
						   " Preço total: R$%4.2f\n\n"
					"", quiloDoce, precoQuilo, precoTotal);				

			break;
			   	case '4':
			if (quiloDoce <= 5){
				precoQuilo = 38.20;
				precoTotal = precoQuilo * quiloDoce;
			   	}
				else {
					precoQuilo = 36.20;
					precoTotal = precoQuilo * quiloDoce;
					
				}
				printf("\n*Cookie de nutella*\n\n"
			    		   " Pedido: %4.2f KG\n"
						   " Preço por KG: R$%4.2f\n"
						   " Preço total: R$%4.2f\n\n"
					"", quiloDoce, precoQuilo, precoTotal);				
			break;
		default:
				printf("\n Você selecionou uma opção não indentificada!!!\n");
				return 0;	
			break;
	}
    system("PAUSE");
}//fim