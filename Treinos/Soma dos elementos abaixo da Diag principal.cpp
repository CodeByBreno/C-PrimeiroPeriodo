#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale (LC_ALL, "portuguese");
	unsigned int i, j, sum, matriz[5][5];
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++){
			printf ("Insira um número natural para a posição [%d][%d] : ", i, j);
			scanf ("%u", &matriz[i][j]);
		}
	printf ("\n");
	for (i = 1; i < 5; i++)
		for (j = 0; j < i; j++)
			sum += matriz[i][j];
	printf ("A soma dos elementos abaixo da diagonal principal é : %u", sum);
}
