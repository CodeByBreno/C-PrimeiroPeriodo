#include <stdio.h>
#include <string.h>
#include <locale.h>

main ()
{
	char string1[99], string2[99], *aux;
	
	setlocale (LC_ALL, "portuguese");
	
	printf ("Digite a primeira string : ");
	gets (string1);
	printf ("Digite a segunda string : ");
	gets (string2);

	printf ("As duas são iguais a partir do %d° caractere", strstr (string1, string2) - string1 + 1);
}
