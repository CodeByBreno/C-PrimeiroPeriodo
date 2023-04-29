#include <stdio.h>

void inicializar(int *vet)
{
	int i;
	for (i = 0; i < 10; i++)
		scanf ("%d", vet + i);
	
}

void mostrar(int *vet)
{
	int i;
	for (i = 0; i < 10; i++)
		printf ("%d", *(vet + i));
}

int main ()
{
	int vet[10];
	inicializar(vet);
	mostrar (vet);
}
