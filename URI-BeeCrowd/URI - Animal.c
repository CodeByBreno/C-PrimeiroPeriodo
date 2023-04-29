#include <stdio.h>

int strlen (char *vet)
{
	int i, t = 0;
	for (i = 0; vet[i] != '\0'; i++) t++;
	return t;
}

int strcmp (char *vet, char *vet1)
{
	int i;
	if (strlen(vet) == strlen(vet1)){
		for (i = 0; vet[i] != '\0'; i++)
			if (vet[i] != vet1[i]) return 0;
		return 1;
		}
	else
		return 0;
}

int main ()
{
	char vet[99], vet1[99], vet2[99], lixo;
	scanf ("%[^\n]s", vet);
	scanf ("%c", &lixo);
	scanf ("%[^\n]s", vet1);
	scanf ("%c", &lixo);
	scanf ("%[^\n]s", vet2);
	scanf ("%c", &lixo);

	if (strcmp(vet, "vertebrado")){
		if (strcmp(vet1, "ave")){
			if (strcmp(vet2, "carnivoro")) printf ("aguia\n");
			else printf ("pomba\n");
		}
		else{
			if (strcmp(vet2, "onivoro")) printf ("homem\n");
			else printf ("vaca\n");
		}
	}
	else{
		if (strcmp(vet1, "inseto")){
			if (strcmp(vet2, "hematofago")) printf ("pulga\n");
			else printf ("lagarta\n");
		}
		else{
			if (strcmp(vet2, "hematofago")) printf ("sanguessuga\n");
			else printf ("minhoca\n");
		}
	}
	return 0;
}