#include <stdio.h>
#include <stdlib.h>

main ()
{
	int i, Abre = 0, D = 0, cont, N;
	char vet[1000], lixo;

	scanf ("%d", &N);
	for (cont = 0; cont < N; cont++){
		scanf ("%c", &lixo);
		scanf ("%s", vet);
		Abre = 0;
		D = 0;

		for (i = 0; vet[i] != '\0'; i++){
			if (vet[i] == '<') Abre++;
			if (vet[i] == '>') {
				if (Abre){
					D++;
					Abre--;
				}
			}
		}
		printf ("%d\n", D);
	}
}
