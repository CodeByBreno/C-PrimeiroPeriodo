#include <stdio.h>
#include <locale.h>
#include <string.h>

main ()
{
	int i;
	char string1[5], string2[5];
	printf ("Insira uma string: ");
	gets(string1);
	strcpy (string2, string1);
	printf ("A string digitada foi: ");
	puts (string2);
}
	
