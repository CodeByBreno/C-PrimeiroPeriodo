#include <stdio.h>

main ()
{
	int i, K;
	long int a;
	scanf ("%d", &K);
	for (i = 0; i < K; i++){
		scanf ("%ld", &a);
		if (a > 8000)
			printf ("Mais de 8000!\n");
		else
			printf ("Inseto!\n");
	}
}
