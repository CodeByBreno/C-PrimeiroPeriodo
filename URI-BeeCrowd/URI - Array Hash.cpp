#include <stdio.h>

main ()
{
	int cont, d, i, j, K, N, valor = 0;
	char vet[51], lixo;
	scanf ("%d", &K);
	for (cont = 0; cont < K; cont++, valor = 0){
		scanf ("%d", &N);
		for (j = 0; j < N; j++){
			scanf ("%c", &lixo);
			scanf ("%[^\n]s", vet);
			for (i = 0; vet[i] != '\0'; i++){
				d = vet[i];
				valor += (d - 65) + i + j;
			}
		}
		printf ("%d\n", valor);
	}
}
