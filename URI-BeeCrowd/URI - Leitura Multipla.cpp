#include <stdio.h>

main ()
{
	int a = 0, i = 0, P, C, cont;
	char vet[51], lixo;
	while (scanf ("%[^\n]s", vet) != EOF){
		scanf ("%d", &P);
		scanf ("%c", &lixo);

		for (cont = 0, C = 0; vet[cont] != '\0'; a = 0){
			while (vet[cont] == 'R'){
				if (a == 0) C++;
				a++;
				if (a > P) { a = 1; C++; }
				cont++;
			}
			while (vet[cont] == 'W') { C++; cont++; }
		}
		printf ("%d\n", C);
	}
}
