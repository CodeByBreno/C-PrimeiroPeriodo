#include <stdio.h>

main ()
{
	int N, i, a;
	scanf ("%d", &N);
	int c[N], f[N], h[i], s[i];

	for (i = 0; i < N; i++) scanf ("%d %d %d", &c[i], &f[i], &h[i]);

	for ( a = 0, i = 1; i < N; i++, a++){
		if (c[i] > c[i - 1])
			s[a] = i - 1;
		else s[a] = i;
		}

	for (i = 0; i < N; i++)
		printf ("%d", s[i]);
}
