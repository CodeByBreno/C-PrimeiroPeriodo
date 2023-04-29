#include <stdio.h>

char check (char *vet)
{
	int i, d;
	for (i = 0; i < 100; i++){
		d = vet[i];
		if (!((d > 64 && d < 91) || (d == 32) || (vet[i] == '\0'))) return ('a'); 
	}
	return (1);
}


void null(char *vet)
{
	int i;
	for (i = 0; i < 100; i++)
		vet[i] = ' ';
}

int strlen (char *vet)
{
	int i, t = 0;
	for (i = 0; vet[i] != '\0'; i++) t++;
	return (t);
}

void meio(char *vet, char *aux)
{
	int i, t, t2;
	t = strlen(vet) - 1;
	for (i = 0; i <= t/2; i++)
		aux[i] = vet[t/2 - i];
	for (i = 0; i <= t/2; i++)
		aux[t/2 + 1 + i] = vet[t - i];
	
}

main ()
{
	char a, vet[101], aux[101];
	int i, j, K, t, b = 1;
	scanf ("%d", &K);
	for (j = 0; j < K; j++){
			null (aux);
			null (vet);
			scanf ("%c", &a);
			scanf ("%[^\n]s", vet);
			b = check (vet);
			if (b == 1){
			meio(vet, aux);
			puts(aux); }
		}

}
