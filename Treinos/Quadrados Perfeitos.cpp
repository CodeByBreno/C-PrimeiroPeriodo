#include <stdio.h>
#include <math.h>
#include <locale.h>

main ()
{
	/* cria um ciclo que recebe numeros naturais
	testa se o numero é quadrado perfeito
	se sim, continua normalmente
	se não, guarda essa informação
	se o numero inserido for 0, o ciclo para 
	exibo se todos foram quadrados perfeitos ou algu não foi */
	
	setlocale (LC_ALL, "portuguese");
	int b = 0, numero = 1;
    double a, x, y;
	if (numero > 0){
		do {
			a = sqrt(numero);
			y = modf(a, &x);
			if ( y != 0 );
			b = 1;
			printf ("Digite um número para o conjunto: ");
			scanf ("%d", &numero);
		} while(numero != 0);
	}
	printf ("\n");
	if (b != 1)
	printf ("Todos os números eram quadrados perfeitos \n");
	else 
	printf ("Algum dos números não era quadrado perfeito \n");
	printf ("Fim");
}
