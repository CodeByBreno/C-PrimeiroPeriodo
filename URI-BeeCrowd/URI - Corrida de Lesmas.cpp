#include <stdio.h>

main ()
{
	int L, i, j, aux;
	
	while (scanf ("%d", &L) == 1){
		int V[L];

		for (i = 0; i < L; i++) scanf ("%d", &V[i]);

		for (i = 1; i < L; i++)
			for (j = 0; j < i; j++)
				if (V[i] < V[j]){
				aux = V[i];
				V[i] = V[j];
				V[j] = aux;
				}
	
		if (V[L-1] >= 20) printf ("3\n");
		else{
			if (V[L-1] < 10) printf ("1\n");
			else printf ("2\n");
			}
	}
}
