#include <stdio.h>
#include <stdlib.h>

main ()
{
	int i, T = 1;
	char *nome, aux;
	i = 0;
	nome = (char *) malloc(sizeof(char));
		while (scanf ("%c", &aux) && aux != '\n'){
			nome[i] = aux;
			if (++i >= T++)
				nome = (char *) realloc(nome, sizeof(char)*T);
		}
		nome[i] = '\0';
	printf ("%s", nome);
}
