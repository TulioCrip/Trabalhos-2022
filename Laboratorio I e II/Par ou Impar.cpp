#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int numero, resto;

main (void){
	setlocale(LC_ALL, "Portuguese");
	
		printf("********************* PAR OU IMPAR? ***********************");
			
		printf("\n\n Escreva seu número: ");
		scanf("%d", &numero);
		
		resto = numero % 2;
		
			if(resto == 0){
				printf(" %d é um número PAR",numero);
			}
			else {
				printf(" %d é um número IMPAR",numero);
			}
			
getch();			
}