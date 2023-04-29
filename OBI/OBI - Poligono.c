#include <stdio.h>

main ()
{
	long int N;
	int P = 0, i, S = 0, aux;
	scanf ("%ld", &N);
	int lado[N];
	
	for (i = 0; i < N; i++){
		scanf ("%d", &lado[i]);
		S += lado[i];
	}

	for (i = 0; i < N; i++)
		if (lado[i] < lado [i - 1]){
			aux = lado[i];
			lado[i] = lado[i - 1];
			lado[i - 1] = aux;
		}
			
	for ( i = N - 1; i >= 0; i--){
		if (lado[i] < S - lado[i]){
			P = i + 1;
			break;
			}		
		S -= lado[i];
		}
			
	printf ("%d", P);
	
}
