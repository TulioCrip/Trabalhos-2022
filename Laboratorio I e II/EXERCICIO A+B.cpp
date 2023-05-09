#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

const float PREMIO = 780000;

int a,b,c,soma;

main (void){
	setlocale(LC_ALL, "Portuguese");
	
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	
		soma = a+b;
		
		if (soma < c){
			printf("\n\n A + B é menor que C");
			
		}
		else {
			printf("\n\n A + B é maior ou igual a C");
		}
}