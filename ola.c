/* um programa em C */
/* type "cc ola.c" para gerar o ficheiro executável a.out*/
/* type "gcc -g -o ola.exe ola.c" para gerar o ficheiro executável "ola.exe" */
/* type "./a.out" para executar*/
/* type "ola.exe" para executar*/



#include <stdio.h>
#include <stdlib.h>
int main()

	{
	
	int x;
	char nome[80];

	printf("Qual é o seu nome? ");
	scanf("%s", nome);
	printf("Qual é o seu número favorito, %s? ", nome);
	scanf("%d", &x);
	printf("Seu número favorito é %d, %s.\n", x, nome);
	exit(0);

	}

