#include <stdio.h>
#include <stdlib.h>

#define x 40

struct funcionario
{
	char nome[50];
	int numDependente, numHoras;
	float salHora, salBruto, INSS, IR, salLiquido;
};

void funcSalBruto(struct funcionario * func)
{
	func->salBruto = func->salHora *  func->numHoras + 198.5 * func->numDependente;
}

void funcINSS(struct funcionario * func)
{
	if(func->salBruto < 1350)
		func->INSS = 0.1 * func->salBruto;
	else
		func->INSS = 300;
}

void funcIR(struct funcionario * func)
{
	if(func->salBruto - func->INSS <= 1500)
		func->IR = 0;
	else if(func->salBruto - func->INSS <= 3500)
		func->IR = func->salBruto * 0.1;
	else
		func->IR = func->salBruto * 0.2; 
}

void funcSalLiq(struct funcionario * func)
{
	func->salLiquido = func->salBruto - (func->INSS + func->IR);
}

int main()
{
	struct funcionario func[x];
	int repete = 0, end;
	
	do
	{
		printf("DESEJA CADASTRAR UM FUNCIONARIO?\n[1]-SIM || [2]-NAO\nRESTA %d CADASTRO RESTANTES\nOPC:", x-repete);
		scanf("%d", &end);
		if(end >= 2)
			break;
		system("cls");
		printf("INFORME O NOME DO FUNCIONARIO: ");
		scanf("%s", func[repete].nome);
		printf("NUMERO DE DEPENDENTES QUE VIVEM COM O FUNCIONARIO: ");
		scanf("%d", &func[repete].numDependente);
		printf("INFORME O SALARIO POR HORA DO FUNCIONARIO: ");
		scanf("%f", &func[repete].salHora);
		printf("INFORME O NUMERO DE HORAS TRABALHADAS DO FUNCIONARIO: ");
		scanf("%d", &func[repete].numHoras);
		
		funcSalBruto(&func[repete]);
		funcINSS(&func[repete]);
		funcIR(&func[repete]);
		funcSalLiq(&func[repete]);
		
		repete++;
	}while(repete < x);
	
	system("cls");
	
	for(int i = 0; i < repete; i++)
		printf("Nome: %s\nSalario por hora: %.2f\nHoras trabalhadas: %d\nSalario bruto: %.2f\nDesconto do INSS: %.2f\nDesconto de IR: %.2f\nSalario Liquido: %.2f\n\n", func[i].nome, func[i].salHora, func[i].numHoras, func[i].salBruto, func[i].INSS, func[i].IR, func[i].salLiquido);
	system("PAUSE");
	return 0;
}