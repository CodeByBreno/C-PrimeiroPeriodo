#include <stdio.h>

int strlen (char *vet)
{
	int i, t = 0;
	for (i = 0; vet[i] != '\0'; i++) t++;
	return t;
}

void *mixer(char *vet, char *vet2)
{
	char mix[101], i;
	int limit, t, t2, a, b;
	t = strlen(vet);
	t2 = strlen(vet2);
	(t > t2) ? (limit = t2) : (limit = t);

	for (a = 0, b = 0, i = 0; i < 2*limit; i++){
		if (!(i % 2)) mix[i] = vet[a++];
		else mix[i] = vet2[b++]; }

	if (t > t2)
		for (a = t2, i = 2*limit; a < t ; i++, a++)
			mix[i] = vet[a];
	else 
		for (a = t, i = 2*limit; a < t2 ; i++, a++)
			mix[i] = vet2[a];
	printf ("%s", mix);
}

main ()
{
	char vet[51], vet2[51], a;
	int i, k;
	scanf ("%d", &k);
	for ( i = 0; i < k; i++){
		scanf ("%c", &a);
		scanf ("%s", vet);
		scanf ("%s", vet2);
		mixer(vet, vet2);
	}
}
