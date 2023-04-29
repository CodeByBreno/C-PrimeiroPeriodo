#include <stdio.h>

main ()
{
	int a, b, c, i, j, N, d;
	char vet[14], lixo;
	scanf ("%d", &N);
	for (i = 0; i < N; i++){
		scanf ("%c", &lixo);
		gets (vet);
		for (j = 0; j < 14; j++){
			d = vet[j];
			if ((d >= 65 && d <= 90) || ( d >= 97 && d <= 122)) vet[j] = ' ';
		}
		sscanf (vet, "%d %d %d", &a, &b, &c);
		printf ("%d\n", a + b + c);
	}
}
