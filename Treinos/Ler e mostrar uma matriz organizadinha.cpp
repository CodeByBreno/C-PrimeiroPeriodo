#include <stdio.h>
#include <locale.h>

main ()
{
	int matriz[3][4], i, j;
	setlocale (LC_ALL, "portuguese");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++){
			printf ("Insira o valor para armanezar na posi��o [%d][%d] : ", i, j);
			scanf ("%d", &matriz[i][j]);
		}
	printf ("\n\nA matriz constru�da � : \n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf ("%03d ", matriz[i][j]);
		}
		printf ("\n");
	}
}
