#include <stdio.h>

void null(char *vet)
{
	int i;
	for (i = 0; vet[i] != '\0'; i++) vet[i] = ' ';	
}

void cifra(char *vet)
{
	int i, d, l;
	scanf ("%d", &l);
	for (i = 0; vet[i] != '\0'; i++) {
		d = vet[i];
		d -= l;
		if (d < 65) d += 26;
		vet[i] = d;
	}
}


main ()
{
	char vet[51], a;
	int i, K;
	scanf ("%d", &K);
	for ( i = 0 ; i < K ; i++)	{
		scanf ("%c", &a);
		scanf ("%[^\n]s", vet);
		cifra(vet);
		puts(vet);	
		null(vet);
	}	
}
