#include <stdio.h>

main ()
{
	int N, i, j, b;
	scanf ("%d", &N);
	int vet[N];
	for (i = 0; i < N; i++)	scanf("%d", &vet[i]);	

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)	if (vet[i] <= vet[j]) b++;
		if (b == N) { b = i; i = N; }	
		else b = 0;
	}

	printf ("Menor valor: %d\n", vet[b]);
	printf ("Posicao: %d\n", b);
}
