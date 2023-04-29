#include <stdio.h>

main ()
{
	int X, i, s;

	while (scanf ("%d", &X), X){
		s = 0;
		if (X % 2) X++;
		for (i = X; i < X + 10; i += 2)
			s += i;
		printf ("%d\n", s);
	}
}
