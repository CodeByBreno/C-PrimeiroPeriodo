#include <stdio.h>

main ()
{
	int A = 0, E = 0, H = 0, M = 0, X = 0, i, N;
	char lixo[99], C;

	scanf ("%d", &N);
	for (i = 0; i < N; i++){
		scanf ("%s %c", lixo, &C);
		if (C == 'A') A++;
		if (C == 'E') E++;
		if (C == 'H') H++;
		if (C == 'M') M++;
		if (C == 'X') X++;
	}
	printf ("%d Hobbit(s)\n", X);
	printf ("%d Humano(s)\n", H);
	printf ("%d Elfo(s)\n", E);
	printf ("%d Anao(s)\n", A);
	printf ("%d Mago(s)\n", M);
}
