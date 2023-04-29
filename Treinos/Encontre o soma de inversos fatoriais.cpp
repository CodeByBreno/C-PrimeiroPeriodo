#include <stdio.h>

main ()
{
	int i, j;
	double N, fat = 1;
	double E = 1;
	printf ("Insira o valor inteiro : ");
	scanf ("%lf", &N);
	
	for (i = 2; i <= N; i++, fat = 1){
		for (j = 1; j <= i; j++)
			fat *= j;
		E += 1 / fat;
	}
	
	printf ("O valor de E eh : %lf", E);
}
