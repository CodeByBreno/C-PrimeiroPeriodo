#include <stdio.h>
#include <windows.h>

int strlen(char *vet)
{
	int i, t;
	for (i = 0; i < 51; i++) t++;
	return t;
}

void contapalavra(char *vet)
{
	int media, vA, i, t = 0, p = 0, a = 0;
	for (i = a; vet[i] != ' ' || vet[i] != '\0'; i++){
		vA = vet[i];
		if ((vA >= 65 && vA <= 90) || (vA >= 97 && vA <= 122)) t++;
		printf ("%d\n", t);
	}
	if (t) p++;
	a += t + 1;
	printf ("%d\n", a);
	printf ("%c\n", vet[i]);
	if (i < strlen(vet)) contapalavra(vet);
	else { printf ("%d", t/p); return; }
}


main ()
{
	int i, K;
	char vet[51], a;
	while (scanf ("%d", &K) == 1){
		scanf ("%c", &a);
		gets(vet);
		puts(vet);
		contapalavra(vet);
	}
}
