#include <stdio.h>

int pot(int a)
{
	int i, p = 2;
	if (a == 0) return (1);
	else {
		for (i = 1; i < a; i++)
			p *= 2;
		return p; 
	}
}

main ()
{
	int K, i, j, t, D; 
	char vet[10000];
	scanf ("%d ", &K);
	for (j = 0; j < K; j++) {
		gets (vet);

		for (i = 0, t = 0; vet[i] != '\0'; i++) t++; /* Tamanho */
		
		for (i = t - 1, D = 0; i >= 0; i--){ /* Tansforma o binario em decimal */
			if (vet[i] == '1') D += pot(t - 1 - i);}
		
		int fib[D]; /*Vetor de fibonnaci */

		for (i = 2, fib[0] = 1, fib[1] = 1; i < D; i++) /* Encontrando o valor do fibonnaci */
			fib[i] = fib[i-1] + fib[i-2];
	
		printf ("%03d\n", fib[D - 1]);		
	}
}
