#include <stdio.h>
#include <stdlib.h>

main ()
{
	int *vet, i, j, gap, flag, aux, T = 5;

	vet = (int *) calloc(1, sizeof(int));
	i = 0;
	while (scanf ("%d", &aux)){
		if (i >= T){
			T += 5;
			vet = (int *) realloc (vet, T*sizeof(int));
		}
		vet[i++] = aux;
	}
	T = i;
	printf ("TAMANHO = %d\n", T);
	for (i = 0; i < T; i++) printf ("%d ", vet[i]);
	printf ("\n");

	gap = T;
		do {
			if (gap != 1) gap /= 1.3;
			for (i = 0, j = gap, flag = 0; j < T; i++, j++)
				if (vet[i] > vet[j]){
					aux = vet[i];
					vet[i] = vet[j];
					vet[j] = aux;
					flag = 1;
				}
			printf ("GAP = %d\n", gap);
			for (i = 0; i < T; i++) printf ("%d ", vet[i]);
			printf ("\n");
		} while (!(flag == 0 && gap == 1));

	for (i = 0, printf ("FINAL = "); i < T; i++) printf ("%d ", vet[i]);

	free(vet);
}
