// CALCULO DE ORDEM CRESCENDE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//variáveis
	int num1, num2;
	//leia
	printf("Digite o número 1: ");
	scanf("%d", &num1);
	
	printf("Digite o número 2: ");
	scanf("%d", &num2);
	
	if (num1 <= num2){
		printf("A ordem é: %d %d", num1, num2);
	}
	else{
		printf("A ordem é: %d %d", num2, num1);
	}
	
	
	
}