#include <stdio.h>
#include <stdlib.h>

main ()
{
	int i, T = 1;
	char *nome, aux;
	setbuf (stdin, NULL);
	i = 0;
	nome = (char *) malloc(sizeof(char));
	scanf ("%c", &aux);
	while (aux != '\n'){
		if (i) scanf ("%c", &aux);
		if (aux != '\n') nome[i++] = aux;
		if (i >= T++)
			nome = (char *) realloc(nome, sizeof(char)*T);
		}
	nome[i] = '\0';
	setbuf (stdin, NULL);
	puts(nome);
}
