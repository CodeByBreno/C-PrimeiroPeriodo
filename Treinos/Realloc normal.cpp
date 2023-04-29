#include <stdio.h>
#include <stdlib.h>

main ()
{
	int *vet, aux, i = 0, T = 5, Q;
	
	vet = (int *) malloc(sizeof(int)*T);
	while (scanf ("%d", &aux)){
		vet[i++] = aux;
		Q = i;
		if (i >= T){
			T += 10;
			vet = (int *) realloc(vet, sizeof(int)*T);
		}
	}
	for (i = 0; i < Q; i++)
		printf ("%d ", vet[i]);
	free(vet);

}
