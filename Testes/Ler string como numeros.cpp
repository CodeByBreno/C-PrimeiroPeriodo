#include <stdio.h>

main ()
{
	int vet[10], i;
	char nom[10];
	for (i = 0; i < 10; i++)
		scanf ("%c.", &vet[i]);
	for (i = 0; i < 10; i++)
		printf ("%d\n", vet[i]);
}
