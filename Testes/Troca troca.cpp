#include <stdio.h>

void trocatroca(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
	
}

int main ()
{
	int A, B;
	printf ("Insira o valor das duas variaveis : ");
	scanf ("%d %d", &A, &B);
	trocatroca (&A, &B);
	printf ("Os valores foram trocados: %d %d", A, B);
	
}
