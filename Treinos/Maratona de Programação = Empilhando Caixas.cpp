#include <stdio.h>

main ()
{
	int N = 1, P = 1, i, j, auxi, auxj, C;
	do{
		scanf ("%d", &N);
		scanf ("%d", &P);
		int caixa[N][P], n[N];
		
		for (i = 0; i < P; i++){
			scanf ("%d", &n[i]);
			for (j = 0; j < n[i]; j++){
				scanf (" %d", &caixa[i][j]);
				if (caixa[i][j] == 1){
					auxi = i;
					auxj = j;
					C = n[i] - 1 - j;	
				}	
			}	
		}
		
	if (n[auxi+1] <= n[auxi-1])
		(n[auxi + 1] > auxj) ? (C += n[auxi + 1] - auxj) : (C = C);				
	else
		(n[auxi - 1] > auxj) ? (C += n[auxi-1] - auxj) : (C = C);
		
	printf ("%d\n", C);
	} while (N && P);
}
