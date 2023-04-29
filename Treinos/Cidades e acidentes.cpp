#include <stdio.h>
#include <stdlib.h>

main ()
{
	long int N, i, j, MAX, MIN, iMAX, iMIN;
	float media = 0, media2 = 0;
	
	printf ("Quantas cidades foram analisadas? ");
	scanf ("%d", &N);
	char nome[N][99];
	int V[N], A[N];
	
	for (i = 0; i < N; i++){
		printf ("Insira o nome da %d cidade : ", i);
		setbuf(stdin, NULL);
		gets (nome[i]);
		printf ("Insira a quantidade de veiculos de passeio na cidade : ");
		scanf ("%d", &V[i]);
		printf ("Insira a quantidade de acidentes de transito com vitimas : ");
		scanf ("%d", &A[i]);
		printf ("\n");
		if (i > 0)
			(A[i] > A[i-1]) ? (MAX = A[i], iMAX = i, MIN = A[i-1], iMIN = i -1 ) : (MAX = A[i-1], iMAX = i-1, MIN = A[i], iMIN = i);
		media += V[i]/N;
		if (V[i] < 2000)
			media2 += V[i]/N;
	}
	
	printf ("A cidade com maior taxa de acidentes foi \"%s\" com %d acidentes\n", nome[iMAX], A[iMAX]);
	printf ("A cidade com menor taxa de acidentes foi \"%s\" com %d acidentes\n\n", nome[iMIN], A[iMIN]);
	
	printf ("A media de veiculos nas cidades dadas eh : %f\n", media);
	printf ("A media de acidentes nas cidades com menos de 2000 veiculos eh : %f", media2);
	
	
	
	
}
