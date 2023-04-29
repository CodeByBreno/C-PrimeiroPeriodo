#include <stdio.h>
#include <math.h>

main ()
{
	int A, B, C, M;
	scanf ("%d %d %d", &A, &B, &C);
	M = (A + B + abs(A-B))/2;
	M = (M + C + abs(M-C))/2;
	printf ("%d eh o maior\n", M);
}
