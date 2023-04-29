#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale (LC_ALL, "portuguese");
	int i;
	char cadeia[5][99];
	for (i = 0; i < 5; i++){
		printf ("Insira a primeira string : ");
		gets (cadeia[i]);
	}
	printf ("As strings que você digitou foram : \n");
	for (i = 0; i < 5; i++)
		printf ("%s\n", cadeia[i]);		
}
