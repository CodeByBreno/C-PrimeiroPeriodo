#include <stdio.h>

main ()
{
	int N, X, Y, S = 0;
	scanf ("%d", &N);
	for ( int i = 0; i < N; i++, S = 0 ) {
		scanf ("%d %d", &X, &Y);
		if (X % 2 == 0) X++;
		for (int j = X; j < X + 2*Y; j += 2) S += j;
		printf ("%d\n", S);
	}
			
}
