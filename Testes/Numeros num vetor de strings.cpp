#include <stdio.h>

main ()
{
	int i, bre[10];
	char vstring[10][99];
	
	for (i = 0; i < 10; i++){
		printf ("Insira a %d cadeia : ", i);
		gets (vstring[i]);
	}
	
	for (i = 0; i < 10; i++){
		printf ("Insira o numero correspondente a cadeia %d : ", i);
		scanf (" %d", bre[i]);
	}
	
	for (i = 0; i < 10; i++)
		sprintf (vstring[i], "%d", bre[i]);
		
}
