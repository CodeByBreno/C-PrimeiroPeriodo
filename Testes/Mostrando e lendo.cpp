#include <stdio.h>

int vet[10];
int i;

void inicializar(void)
{
	for ( i = 0; i < 10; i++)
		scanf ("%d", &vet[i]);
}

void mostrar(void)
{
	for (i = 0; i < 10; i++)
		printf ("%d", *(vet + i));
}

main ()
{
	printf ("Insira os elementos do vetor: ");
	inicializar();
	i = 0;
	printf ("O vetor inserido foi : ");
	mostrar();
}
