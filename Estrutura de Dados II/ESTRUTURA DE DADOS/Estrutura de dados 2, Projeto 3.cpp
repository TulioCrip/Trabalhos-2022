//EXERCICIO DE PILHA
// 1 - ESCREVA UM PROGRAMA EM C UTILIZANDO PILHA EST�TICO QUE PERMITA A INCLUS�O DE BASE NUM�RICA 
// O PROBLEMA DEVE SOLICITAR AO USU�RIO QUE DIGITE UM N�MERO NATURAL EM BASE DECIMAL E, EM SEGUIDA,
// EXIBA O RESULTADO DESSE N�MERO EM BASE BIN�RIA.

// ---- COME�O ----
#include <stdio.h>
#define m 30

struct Pilha
{
	int topo;
	int elemento[m];
};
typedef struct Pilha PILHA;

void iniciaPilha(PILHA*P)
{
	P->topo = -1;
}
void PUSH(PILHA*P, int resto)
{
	if (P->topo == m-1){
		puts("Sem Espa�o");
	} else {
		P->topo++;
		P->elemento[P->topo] = resto;
	}
}
void POP (PILHA *P)
{
	if (P->topo == -1){
		puts("Pilha Vazia");
	}else {
		P->topo--; 
	}
}

int main()
{
	PILHA P;
	int i, valorSelecionado, resto;
	
	//entrada de dados
	puts("Digite o Valor Selecionado pertencente aos Numeros Naturais");
	scanf("%d", &valorSelecionado);
	
		do 
		{
			   resto = valorSelecionado%2;
			   PUSH(&P, resto);
			   valorSelecionado = valorSelecionado / 2;	
		}while(valorSelecionado != 0);
			puts("N�mero em Binario\n");
		for (i = P.topo;i >= 0;i--)
		{
		 printf("%d", P.elemento[i]);
		 POP(&P);	   	
		}

	return 0;
}


