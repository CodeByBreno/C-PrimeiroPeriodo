#include <stdio.h>

main ()
{
	int A1, B1, A2, B2;
	double p1, p2;
	scanf ("%d %d %lf", &A1, &B1, &p1);
	scanf ("%d %d %lf", &A2, &B2, &p2);
	printf ("TOTAL A PAGAR: R$ %.2lf\n", B1*p1 + B2*p2);
}
