#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "portuguese");
	
	char reg = '1';
	unsigned int n, i, a;
	
	while (reg == '1'){
		printf ("Insira um valor de 0 a 255: ");
		scanf ("%d", &n);
		if ( n > 255 || n < 0)
			printf ("Valor inválido\n\n");
		else {
			a = n;
			for (i = 8; i > 0; i--){;
				n = n >> (i-1);
				printf ("%d ", n%2);
				n = a;
				}
			printf ("\n\n");
		}
		printf ("Calcular outra vez? \n  Se sim, digite 1 \n  Se não, digite qualquer outra coisa : ");
		scanf (" %c", &reg);
	}
	printf ("\nFim");		
}
