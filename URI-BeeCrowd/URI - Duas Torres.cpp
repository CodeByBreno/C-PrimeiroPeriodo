#include <stdio.h>

main ()
{
	int D, p1, p2;
	double ICM;
	scanf ("%d %d %d", &D, &p1, &p2 );
	ICM = (float)D/(p1 + p2);
	printf ("%.2lf\n", ICM);
}
