#include <stdio.h>
#include <math.h>

main ()
{
	double A, B, C, X1, X2;
	scanf ("%lf %lf %lf", &A, &B, &C);
	if (B*B - (4*A*C) >= 0 || A != 0){
		X1 = (-B + sqrt(B*B - (4*A*C)))/2*A;
		X2 = (-B - sqrt(B*B - (4*A*C)))/2*A;
		printf ("R1 = %.5lf\n", X1/100);
		printf ("R2 = %.5lf\n", X2/100);
	}
	else
		printf ("Impossivel calcular\n");
	
}
