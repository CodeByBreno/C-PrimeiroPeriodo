#include <stdio.h>
#include <string.h>
#include <locale.h>

main ()
{
	char string1[99], string2[99];
	setlocale(LC_ALL, "portuguese");
	printf ("Insira a primeira palavra : ");
	gets(string1);
	printf ("Insira a segunda palavra : ");
	gets(string2);
	
	if (strlen(string1) == strlen(string2)){
		if (!strcmp(string1, string2))
			printf ("As palavras s�o iguais! \n"); 
			}
	else 
		printf ("A concatena��o das palavras dadas � : %s", strcat(string1, string2));
	
	
}
