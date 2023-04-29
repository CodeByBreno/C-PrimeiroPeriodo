#include <stdio.h>
#include <math.h>

main ()
{
	double A, Fracionario, Inteiro;
	scanf ("%lf", &A);
	Fracionario = modf(A, &Inteiro);
	printf ("Parte inteira: %lf\n", Inteiro);
	printf ("Parte Fracionária: %lf\n", Fracionario);
	
	if (Fracionario == 0)
	printf ("Foi inserido um numero inteiro\n");
}
