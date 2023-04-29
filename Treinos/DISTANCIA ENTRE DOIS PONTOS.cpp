#include <stdio.h>
#include <math.h>

main ()
{
	float Xa, Ya, Xb, Yb;
	printf ("Entre as coordenadas de A : ");
	scanf ("%f %f", &Xa, &Ya);
	printf ("Entre as coordenadas B : ");
	scanf ("%f %f", &Xb, &Yb);
	printf ("A distancia entre esses dois pontos eh : %f", sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2)));
}
