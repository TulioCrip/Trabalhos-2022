#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define h 3

struct aluno
{
	char nome[50];
	float prova1, prova2, trabalho, media;
	char sh;
};

int main(){
	char nomeAluno[50];
	struct aluno a[20];
	int i, opc;
	i = -1;
	
	do{
	puts("  Selecione uma das Opções:");
	printf("\n [ 1 ] Cadastrar Aluno \n [ 2 ] Media do Aluno \n [ 3 ] Visualizacao de aprovados e não aprovados \n [ 4 ] Sair\n \n---->");
	
	scanf("%d", &opc);
	
	switch(opc)
	{
	case 1:	
		for(i = 0; i < h; i++){
		puts("Digite o nome do Aluno: ");
		scanf("%s", a[i].nome);
		puts("Digite a nota da prova 1");
		scanf("%f", &a[i].prova1);
		puts("Digite a nota da prova 2");
		scanf("%f", &a[i].prova2);
		puts("Digite a nota de trabalho");
		scanf("%f", &a[i].trabalho);
		a[i].media = ((2 * a[i].prova1) + (3 * a[i].prova2)+ (1 * a[i].trabalho) )/ 6;
		printf("---------------------------\n");
		system("CLS");
		}
		break;
	case 2:
		printf(" Digite o nome do Aluno desejado \n ---> ");
		scanf("%s", nomeAluno);
		for (i = 0; i <= h; i++){
			if (strcmp(a[i].nome, nomeAluno)== 0){
				printf("Media do Aluno - %s: %.2f\n", a[i].nome, a[i].media);
			}
		}
		break ;
	case 3:
		for (i = 0; i < h; i++){
			if(a[i].media >= 6){
				
				printf("Aluno %s Aprovado!!!\n",a[i].nome);
			} else
			{
				printf("Aluno %s reprovado!!\n", a[i].nome);
			}
		}
		break;
	case 4:
		puts("Voce escolheu sair....");
		break;
	default:
		puts("Opcao invalida");

		break;
	}
	}while(opc != 4);	
}