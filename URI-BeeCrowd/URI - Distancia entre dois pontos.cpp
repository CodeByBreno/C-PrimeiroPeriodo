#include <stdio.h>
#include <math.h>

main ()
{
	float Xa, Ya, Xb, Yb;
	float d;
	scanf ("%f %f", &Xa, &Ya);
	scanf ("%f %f", &Xb, &Yb);
	d = sqrt(pow(Xa - Xb, 2) + pow(Ya -Yb, 2));
	printf ("%.4f\n", d);
}
