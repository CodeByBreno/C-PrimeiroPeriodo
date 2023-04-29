#include <stdio.h>

main ()
{
	int A, B, C;
	scanf ("%d", &A);
	scanf ("%d", &B);
	scanf ("%d", &C);
	
	if (A == B)
		printf ("%d", C);
	else
		if (A == C)
			printf ("%d", B);
		else
			printf ("%d", A);
		
}
