// CALCULO DE ORDEM CRESCENDE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//vari�veis
	int num1, num2;
	//leia
	printf("Digite o n�mero 1: ");
	scanf("%d", &num1);
	
	printf("Digite o n�mero 2: ");
	scanf("%d", &num2);
	
	if (num1 <= num2){
		printf("A ordem �: %d %d", num1, num2);
	}
	else{
		printf("A ordem �: %d %d", num2, num1);
	}
	
	
	
}