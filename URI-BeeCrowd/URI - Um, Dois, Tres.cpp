#include <stdio.h>

main ()
{
	int t, i, j, b, K;
	char vet[6], lixo;
	scanf ("%d", &K);
	for (i = 0; i < K; i++, t = 0){
		scanf ("%c", &lixo);
		scanf ("%s", vet);
		for (j = 0; vet[j] != '\0'; j++) t++;
		if (t > 4) printf ("3\n");
		else {
			if ((vet[0] == 'o' && vet[1] == 'n') || (vet[1] == 'n' && vet[2] == 'e') || (vet[0] == 'o' && vet[2] == 'e'))
				printf ("1\n");
			else printf ("2\n");
		}	
	}
}

