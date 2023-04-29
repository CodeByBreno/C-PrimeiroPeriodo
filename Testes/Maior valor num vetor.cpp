#include <stdio.h>

int Maior(int *vet)
{
	int i, j, b;
	for (i = 0; i < 10; i++, b = 0)
		for (j = 0; j < 10; j++){
			if (vet[i] >= vet[j]) b++;
			else b--;
		if (b == 10) return vet[i];
		}
}

int main (void)
{
	int vet[10], i, n;
	printf ("Entre com os valores do vetor: ");
	for ( i = 0; i < 10; i++)
		scanf ("%d", vet + i);
	n = Maior(vet);
	printf ("O maior valor no vetor eh: %d", n);
	
}
