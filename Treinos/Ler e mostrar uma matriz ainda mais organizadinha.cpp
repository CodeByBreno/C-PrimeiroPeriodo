#include <stdio.h>
#include <locale.h>

main ()
{
	float matriz[7][4];
	int i, j;
	setlocale (LC_ALL, "portuguese");
	
	for (i = 0; i < 7; i++)
		for (j = 0; j < 4; j++){
			printf ("Insira o número da posição [%d][%d] : ", i+1, j+1);
			scanf ("%f", &matriz[i][j]);
		}
	printf ("\n\n");
	for (i = 0; i < 7; i++){
		printf ("|");
		for (j = 0; j < 4; j++){
			printf ("%8.2f", matriz[i][j]);
		}
		printf ("|\n");
	}
}
