#include <stdio.h>
#include <math.h>

main ()
{
	float R1, X1, Y1, R2, X2, Y2, D;
	
	while (scanf ("%f %f %f %f %f %f", &R1, &X1, &Y1, &R2, &X2, &Y2) != EOF){
		if (X1 == X2 && Y1 == Y2){
			if (R1 >= R2) printf ("RICO\n");
			else printf ("MORTO\n");
		}
		else{
			D = (X1 - X2)*(X1 - X2) + (Y1 - Y2)*(Y1 - Y2);
			D = sqrt(D);
			if (D + R2 <= R1) printf ("RICO\n");
			else printf ("MORTO\n");
		}
	}	
}
