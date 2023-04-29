#include <stdio.h>
#include <stdlib.h>

main ()
{
	int i, Abre = 0, P = 0;
	char vet[10000], lixo;

	while (scanf ("%[^\n]", vet) != -1){
		scanf ("%c", &lixo);
		Abre = 0;
		P = 0;

		for (i = 0; vet[i] != '\0'; i++){
			if (vet[i] == '(') { Abre++; P++; }
			if (vet[i] == ')') {
				if (Abre--) P++;
				else{ P = 0; break; }
			}
		}
		if (P % 2 == 0 && P) printf ("correct\n");
		else printf ("incorrect\n");
	}
}
