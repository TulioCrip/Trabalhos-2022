#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h> //toupper
#include <windows.h> //bip
#include <time.h>

			//VARIÁVEIS 
int consumo; 
float conta, desconto;
char profissao;
			//constantes
const int L1 = 10, L2 = 20, L3 = 30;		
const float DESC_PROF = 0.8, DESC_MED = 0.85, DESC_DENTISTA = 0.9, DESC_OUTRO = 0.95; 
const float  PRECO1 = 1.50, PRECO2 = 2.00, PRECO3 = 2.50, PRECO4 = 3.00;
	
int main()
{
		//entrada de dados
		setlocale(LC_ALL, "Portuguese");
	printf("Informe a profissão: \n");
	printf("\n [P] - Professor" );
	printf("\n [M] - Médico" );
	printf("\n [D] - Dentista" );
	printf("\n [O] - Outros" );	
	printf("\n\n => ");
	
		//processamento
	profissao = getche();
	profissao = toupper(profissao);
	
	switch(profissao)
	{
		case 'P':
			desconto = DESC_PROF;
			break;
		case 'M':
			desconto = DESC_MED;
			break;
		case 'D':
			desconto = DESC_DENTISTA;
			break;
		case '0':
			desconto = DESC_OUTRO;
			break;
		default:
			printf("\n Você selecionou uma opção não indentificada");
			Beep(1000, 500);
			Sleep(1500);
			system("cls");
			
			return 0;
			
			break;
	}

	printf("\n\n Informe o consumo: ");
	scanf("%i", &consumo);
	
	if (consumo <= L1) {
		conta = consumo * PRECO1;
	}
	else {
		if (consumo <= L2){
			conta = consumo * PRECO2;
		}
			else {
				if (consumo <= L3) {
				   	conta = consumo * PRECO3;
				}
					else {
						conta = consumo * 3;
					}
			}
	}
		conta = conta * desconto;
	system("cls");
	printf("\n\n\n\nSeu conta será do valor de: R$ %4.2f", conta);
	Beep(500,200);
	Beep(500,200);
	Beep(500,50);
	Beep(300, 100);
	Beep(400,100);
	Beep(400,100);
	Beep(300,100);
	Beep(400,100);
	Beep(400,100);
	Beep(500,200);
	Beep(500,200);
	Beep(500,50);
	Beep(300, 100);
	Beep(400,100);
	Beep(400,100);
	Beep(300,100);
	Beep(400,100);
	Beep(400,100);
	Beep(500,200);
	Beep(500,50);
	Beep(300, 100);
	Beep(400,100);
	Beep(400,100);
	Beep(300,100);
	Beep(400,100);
	Beep(400,100);
}