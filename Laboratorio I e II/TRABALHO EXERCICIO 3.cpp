/*
EXERCICIO 3.....................................................................
AUTOR: TULIO HENRIQUE SATURNO FECHINE...........................................
DATA: 18/05/2022................................................................

DISCIPLINA: LABORAT�RIO DE ALGORITIMO...........................................

UMA ESCOLA PRECISA DE AJUDA PARA CALCULAR OS POSTOS DOS ALUNOS QUE V�O VIAJAR, 
FORAM DIVIDAS EM 3 MODALIDADES, FUTEBOL, VOLEI E BASQUETE. CASO O ALUNO CONSEGUIR
FAZER A MEDIA DE 200 PONTOS, ELE PODER� IR VIAJAR. FA�A UM PROGRAMA QUE 
FACILITE A VIDA DESTA ESCOLA.

*/ 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


const int PONTUACAO = 200;
float futebol, volei, basquete, mediaPont;

int main(void)
{
	   setlocale(LC_ALL, "Portuguese");	
	   
	   printf("|***CALCULO DE PONTUA��O***|\n");
	   
	   printf("\n Digite a pontu��o de futebol: \n--->");
	   scanf("%f", &futebol);
	   
	   printf("\n Digite a pontu��o de volei: \n--->");
	   scanf("%f", &volei);
	   	   
	   printf("\n Digite a pontu��o de basquete: \n--->");
	   scanf("%f", &basquete);
	   
	   printf("<---- PRECIONE ENTER PARA CONTINUAR ---->");
	   
	   getch();
	   system("cls");
	   
	   mediaPont = (futebol + volei + basquete)/3;
	   
	   if(mediaPont >= PONTUACAO){
		   printf("\n\nEste aluno fez %4.2f pontos, logo ele poder� viajar\n", 
		   "",mediaPont);
	   } else
	   {
		   printf("\n\nEste aluno fez %4.2f pontos, logo ele n�o poder� viajar\n"
		   "", mediaPont);
	   }
	   

}



