#include <stdio.h>
#include <math.h>
#include <locale.h>

main ()
{
	/* cria um ciclo que recebe numeros naturais
	testa se o numero � quadrado perfeito
	se sim, continua normalmente
	se n�o, guarda essa informa��o
	se o numero inserido for 0, o ciclo para 
	exibo se todos foram quadrados perfeitos ou algu n�o foi */
	
	setlocale (LC_ALL, "portuguese");
	int b = 0, numero = 1;
    double a, x, y;
	if (numero > 0){
		do {
			a = sqrt(numero);
			y = modf(a, &x);
			if ( y != 0 );
			b = 1;
			printf ("Digite um n�mero para o conjunto: ");
			scanf ("%d", &numero);
		} while(numero != 0);
	}
	printf ("\n");
	if (b != 1)
	printf ("Todos os n�meros eram quadrados perfeitos \n");
	else 
	printf ("Algum dos n�meros n�o era quadrado perfeito \n");
	printf ("Fim");
}
