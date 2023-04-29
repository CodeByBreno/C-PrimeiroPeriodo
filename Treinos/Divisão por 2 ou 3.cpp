#include <stdio.h>
#include <locale.h>
#include <math.h>

main ()
{
	setlocale (LC_ALL, "portuguese");
	double valor[4], frac, lixo;
	int i, b = 0;
	
	for ( i = 0; i < 4; i++){
	printf ("Insira o valor %d : ", i+1);
	scanf ("%lf", &valor[i]);
	}
	printf ("\n");
	for (i = 0; i < 4; i++){
		frac = modf(valor[i]/2, &lixo);
		if (frac == 0){
		printf ("O valor %d é válido e vale: %.0lf\n", i+1, valor[i]);
		b = 1;
     	}
		else{
			frac = modf(valor[i]/3, &lixo);
			if (frac == 0){
			printf ("O valor %d é válido e vale: %.0lf\n", i+1, valor[i]);
			b = 1;
	     	}
		}
	}
	if ( b == 0 )
	printf ("Nenhum valor válido foi inserido");
}
