#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int numero, resto;

main (void){
	setlocale(LC_ALL, "Portuguese");
	
		printf("********************* PAR OU IMPAR? ***********************");
			
		printf("\n\n Escreva seu n�mero: ");
		scanf("%d", &numero);
		
		resto = numero % 2;
		
			if(resto == 0){
				printf(" %d � um n�mero PAR",numero);
			}
			else {
				printf(" %d � um n�mero IMPAR",numero);
			}
			
getch();			
}