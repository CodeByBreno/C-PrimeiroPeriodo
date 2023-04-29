#include <stdio.h>
#include <locale.h>
#include <string.h>

main ()
{
	unsigned int a, i, b = 1;
	char string1[99], string2[99], aux[99];
	setlocale(LC_ALL, "portuguese");
	printf ("Insira a primeira palavra : ");
	gets (string1);
	printf ("Insira a segunda palavra : ");
	gets (string2);
	if (strlen(string1) > strlen(string2)){
		for (a = 0, i = strlen(string1) - strlen(string2); i < strlen(string1); i++, a++ )
			aux[a] = string1[i];
		if (strcmp(string2,aux) == 0)
			printf ("A segunda está na primeira a partir da posição %u\n", (strlen(string1) - strlen(string2)) + 1);
		else 
			printf ("A segunda não está contida na primeira\n");
		}
	else
		printf ("A segunda não está contida na primeira\n");		
}
