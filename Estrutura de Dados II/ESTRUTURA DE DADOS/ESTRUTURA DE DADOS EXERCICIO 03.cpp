#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define h 15

struct contaBancaria
{
	char conta[25];
	char nome [30];
	float saldo;
};

int main()
{
	struct contaBancaria conta[15];
	
	char nomeCliente[30], numConta[50];
	int i = -1, opc;
	
	do{
		printf("[ 1 ] - Cadastrar Conta\n");
		printf("[ 2 ] - Visualizar Conta de Determinado Cliente\n");
		printf("[ 3 ] - Vizualizar Clientes Saldo NEgativo\n");
		printf("[ 4 ] - Mostrar a conta com maior saldo \n");
		printf("[ 5 } - Sair\n --->");
		scanf("%d", &opc);
		
		switch(opc)
		{
		case 1:
			for (i = 0; i < h; i++)
			{
			printf("Digite o Numero da Conta: \n");
			scanf("%s", conta[i].conta);
				if (strcmp(conta[i].conta, nomeCliente))
				{
					printf("Numero de conta ja existente!");
				}			
			printf("Digite o Nome do Cliente: \n");
			scanf("%s", conta[i].nome);
			printf("Digite o Saldo da Conta: \n");
			scanf("%f", &conta[i].saldo);
				
			}
			break;
		case 2:
		printf(" Digite o nome do Cliente desejado \n ---> ");
		scanf("%s", nomeCliente);
		for (i = 0; i <= h; i++){
			if (strcmp(conta[i].nome, nomeCliente)== 0){
				printf("Nome do Aluno do Cliente: %s \n Numero de Conta: %s \n Saldo da Conta: %.2f \n", conta[i].nome, conta[i].conta, conta[i].saldo);
			}
		}			
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			puts("Você, escolheu sair....");
			break;
		default:
			printf("Opção Invalidada!");
			break;
		}
	}while(opc != 5);
	return 0;
}