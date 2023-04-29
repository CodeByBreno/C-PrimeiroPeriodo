#include <stdio.h>

main ()
{
	int i, N, A, B, aux;
	scanf ("%d", &N);
	for (i = 0; i < N ; i++){
		scanf ("%d %d", &A, &B);
		if (A <= B) {
			aux = A;
			A = B;
			B = aux;
		}
		while (A % B != 0) { aux = A; A = B; B = aux % B; }
		printf ("%d\n", B);	
	}
}
