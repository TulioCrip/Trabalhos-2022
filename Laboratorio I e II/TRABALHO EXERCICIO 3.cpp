/*
EXERCICIO 3.....................................................................
AUTOR: TULIO HENRIQUE SATURNO FECHINE...........................................
DATA: 18/05/2022................................................................

DISCIPLINA: LABORATÓRIO DE ALGORITIMO...........................................

UMA ESCOLA PRECISA DE AJUDA PARA CALCULAR OS POSTOS DOS ALUNOS QUE VÃO VIAJAR, 
FORAM DIVIDAS EM 3 MODALIDADES, FUTEBOL, VOLEI E BASQUETE. CASO O ALUNO CONSEGUIR
FAZER A MEDIA DE 200 PONTOS, ELE PODERÁ IR VIAJAR. FAÇA UM PROGRAMA QUE 
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
	   
	   printf("|***CALCULO DE PONTUAÇÃO***|\n");
	   
	   printf("\n Digite a pontução de futebol: \n--->");
	   scanf("%f", &futebol);
	   
	   printf("\n Digite a pontução de volei: \n--->");
	   scanf("%f", &volei);
	   	   
	   printf("\n Digite a pontução de basquete: \n--->");
	   scanf("%f", &basquete);
	   
	   printf("<---- PRECIONE ENTER PARA CONTINUAR ---->");
	   
	   getch();
	   system("cls");
	   
	   mediaPont = (futebol + volei + basquete)/3;
	   
	   if(mediaPont >= PONTUACAO){
		   printf("\n\nEste aluno fez %4.2f pontos, logo ele poderá viajar\n", 
		   "",mediaPont);
	   } else
	   {
		   printf("\n\nEste aluno fez %4.2f pontos, logo ele não poderá viajar\n"
		   "", mediaPont);
	   }
	   

}



