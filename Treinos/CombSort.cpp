#include <stdio.h>

int gap = 10;

void CombSort (double *vet)
{
	int i, j, g = 0;
	double aux;
	if (gap != 1) gap = gap/1.3;
	for (i = 0, j = gap, g = 0; j != 10; i++, j++)
		if (vet[i] > vet[j]){
			aux = vet[i];
			vet[i] = vet[j];
			vet[j] = aux;
			g++;
		}

	if (!g && gap == 1) return;
	else CombSort(vet);
}

main ()
{
	int i;
	double vet[10] = {10,9,8,7,6,5,4,3,2,1};
	CombSort(vet);
	for (i = 0; i < 10; i++) printf ("%lf ", vet[i]);
	
}
