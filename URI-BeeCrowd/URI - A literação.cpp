#include <stdio.h>

main ()
{
	char texto[5000], vet[100], p, lixo;
	int i, j, N, d, dec[100];
	while (scanf ("%[^\n]s", texto) != EOF){
		p = 1;
		N = 0;
		scanf ("%c", &lixo);

		vet[0] = texto[0];

		for (i = 1; texto[i] != '\0'; i++){
			if (texto[i] == ' ') 
				vet[p++] = texto[i + 1];
		}

		vet[p] = '\0';

		for (i = 0; i < p; i++)
			dec[i] = vet[i];

		for (i = 0; i < p;){
			if (dec[i] == dec[i+1] || dec[i] == dec[i+1] + 32 || dec[i] == dec[i+1] - 32){
				N++;
				d = dec[i];
				while (dec[i] == d) i++;
				}
			else i++;
		}
		printf ("%d\n", N);
	}
}
