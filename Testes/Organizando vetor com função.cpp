#include <stdio.h>
#include <stdlib.h>

int OrdemC(int *vet, int N)
{
	int i , j, aux;
	for (i = 1; i < N; i++)
		for (j = 0; j < i; j++)
			if (vet[i] < vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
		}	
}

void Chama(void)
{
	int N, i;
	printf ("Insira o tamanho do vetor: ");
	scanf ("%d", &N);
	int vet[N];
	printf ("Insira os elementos do vetor: ");
	for (i = 0; i <N; i++)
		scanf ("%d", &vet[i]);
	OrdemC(vet, N);
	printf ("O vetor organizado eh: ");
	for (i = 0; i <N; i++)
		printf ("%d", vet[i]);
}

int main ()
{
	int X, i;
	printf ("Quantos vetores tu deseja organizar? : ");
	scanf ("%d", &X);
	for (i = 0; i < X; i++){
		printf ("\n\nMODULO DE ORGANIZACAO DO VETOR ----------------- \n\n");
		Chama();
		printf ("\n\nFIM DO MODULO %d ----------------------------- \n\n", i);
		}
}


