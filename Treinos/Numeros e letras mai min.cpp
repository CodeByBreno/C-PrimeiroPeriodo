#include <stdio.h>

main ()
{
	int i, a;
	
	printf ("Digite um numero de 1 a 26 : ");
	scanf (" %d", &a);
	printf ("\n");
	
	for (i = 0; i < a; i++)
		printf ("%d : %c%c\n", i + 1, 65 + i, 97 + i);
	
}
