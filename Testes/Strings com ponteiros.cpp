#include <stdio.h>

main ()
{
	int i;
	char string[10][99], *p;
	
	for (i = 0, p = string[0]; i < 10; i++){
		printf ("Insira o nome %d : ", i);
		scanf(" %s", p);
		p += 99;
	}
	printf ("\n");
	
	for (i = 0, p = string[0]; i < 10; i++){
		printf ("%s\n", p);
		p += 99;
	}
	
}
