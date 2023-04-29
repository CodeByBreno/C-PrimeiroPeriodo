#include <stdio.h>

main ()
{
	int i, j, a, vet[10], aux;
	
	for (i = 0; i < 10; i++){
		printf ("Digite o elemento %02d do vetor : ", i+1);
		scanf (" %d", &vet[i]);
	}
	
	for (i = 1; i < 10; i++)
		for (j = 0; j < 10; j++)
			if (vet[i] < vet[j]){
				aux = vet[j];
				vet[j] = vet[i];
				vet[i] = aux;
			}		
	
	printf ("\n\nVetor organizado : ");
	for (i = 0; i < 10; i++)
		printf ("%d ", vet[i]);
}
