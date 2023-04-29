#include <stdio.h>
#include <string.h>
#include <locale.h>

main ()
{
	setlocale (LC_ALL, "portuguese");
	char aux = '1', i, malhastring[5][99], string[99]; 
	
	for (i = 0; i < 5; i++){
		printf ("Insira a string %hhd : ", i+1);
		gets (malhastring[i]);	
	}
	
	printf ("\nInsira uma string comparativa : ");
	gets (string);
	printf ("\n");
	
	for (i = 0; i < 5; i++)
		if (!strcmp(malhastring[i], string)){
			printf ("A string comparativa \"%s\" eh igual a string na posicaum %hhd\n", string, i+1);
			aux = '0';
		}	
	if (aux == '1')	
		printf ("A  string comparativa não está no vetor\n");
}
