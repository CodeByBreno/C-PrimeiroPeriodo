#include <stdio.h>
#include <locale.h>
#include <math.h>

main ()
{
	setlocale (LC_ALL, "portuguese");
	int i, b = 0;
	double valor[4], frac, inteiro;
	for (i = 0; i < 4; i++){
		printf ("Insira o valor %d : ", i+1);
		scanf ("%lf", &valor[i]);
		}
		printf ("\n");
		
	for ( i = 0; i < 4; i++){
		frac = modf((valor[i]/6), &inteiro);
		if (frac == 0){
		printf ("Valor %d é válido e vale: %.0lf\n", i+1, valor[i]);
		b = 1;
     	}
	}
	if (b == 0)
	printf ("Nenhum valor válido\n");
	printf ("Fim");
}
