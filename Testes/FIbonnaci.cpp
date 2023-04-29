#include <stdio.h>

main ()
{
	long long int i, vet[1000];
	for (i = 2; i < 30; i++){
		vet[0] = 1;
		vet[1] = 1;
		vet[i] = vet[i-1] + vet[i-2];
		printf ("%d  ", vet[i]);
		if (!(i % 10)) printf ("\n");
	}

}
