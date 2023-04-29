#include <stdio.h>

int strlen (char *vet)
{
	int i, t = 0;
	for (i = 0; vet[i] != '\0'; i++) t++;
	return t + 1;
}

main ()
{
	int j, i, a, K, b = 0;
	char vet[1000], vet2[1000], plau;
	scanf ("%d", &K);
	for (a = 0; a < K; a++, b = 0){
		scanf ("%c", &plau);
		scanf ("%s", vet);
		scanf ("%s", vet2);
		for (j = 0, i = strlen(vet) - strlen(vet2); i < strlen(vet); i++, j++)
			if (vet[i] == vet2[j]) b++;
		if (b == strlen(vet2)) printf ("encaixa\n");
		else printf ("nao encaixa\n");
	}
		
}
