#include <stdio.h>

main ()
{
	long long int N, fat = 1, i, j;
	printf ("Insira o valor limite : ");
	scanf ("%lld", &N);
	for (i = 1; i <= N; i++, fat = 1){
		for (j = 1; j < i + 1; j++)
			fat *= j;
		printf ("O fatorial de [%d] eh [%lld]\n", i, fat);
	}
}
