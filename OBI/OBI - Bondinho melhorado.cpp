#include <stdio.h>

main ()
{
	int A, B, q, r;
	scanf ("%d", &A);
	scanf ("%d", &B);
	q = (A + B*2) / 50;
	r = (A + B*2) % 50;
	
	if (r == 0)
		printf ("S�o necessarias, no minimo, %d viagens", q);
	else
		printf ("S�o necessarias, no minimo, %d viagens", q+1);
	
	
	
}
