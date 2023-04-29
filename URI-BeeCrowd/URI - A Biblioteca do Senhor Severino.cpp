#include <stdio.h>

void ordem(int *vet, int K)
{
	int i, j, aux;
	for (i = 1; i < K; i++)
		for (j = 0; j < i; j++)
			if (vet[i] < vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
	}
	return;
}


main ()
{
	int i, j, K;
	char vet[4], lixo;
	while(scanf ("%d", &K) != EOF){
		int valor[K];
		for (j = 0; j < K; j++) scanf ("%d", &valor[j]);
		ordem(valor, K);
		for (i = 0; i < K; i++) printf ("%04d\n", valor[i]);
	}
}
