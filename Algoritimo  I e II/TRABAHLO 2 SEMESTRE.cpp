#include <stdio.h>
#include<stdlib.h>

int main()
{
	char sexo, estCivil, nome[50], controle;
	int numFilhos, numCasados, numMaesolo, participantes;
	
	controle = 'S';
	participantes = 0;
	numCasados = 0;
	numMaesolo = 0;
	
	while(controle == 'S')
	{
		printf("\n Bem vindo a Pesquisa de Grupos  \n");
		printf("\n\n Digite seu nome: ");
		fflush(stdin);
		gets(nome);
		
		printf("\n Qual o seu sexo?\n M para masculino \n F para feminino\n ->");
		fflush(stdin);
		scanf("%c", &sexo);
		
		printf("\n Qual o seu estato civil?\n C para Casado \n S para solteiro\n ->");
		fflush(stdin);
		scanf("%c", &estCivil);
		
		printf("\nVocê possui filhos?\n Se sim, informe a quantidade. Se nao, digite ""0"" \n ->" );
		scanf("%d", &numFilhos);

			
		printf("\nCaso tenha mais pessoas, aperte S, caso nao, precione N \n ->");
		fflush(stdin);
		scanf("%c", &controle);

			if (sexo == 'M' || sexo == 'm' && estCivil == 'C' || estCivil == 'c')
			{
				numCasados = numCasados + 1;
			}
			if (sexo == 'F' || sexo == 'f' && estCivil == 'S' || estCivil == 'S' && numFilhos > 0)
			{
				numMaesolo = numMaesolo + 1;
			}

		participantes = participantes + 1;	
		system("cls");
	}
		printf("\nNumero de participantes e igual: %d", participantes);
	   	printf("\nNumero de Homens casados: %d", numCasados);
	   	printf("\nNumero de mães solteiras: %d", numMaesolo);
	
}