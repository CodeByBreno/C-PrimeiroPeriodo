#include <stdio.h>

main ()
{
	int c = 0, i, N, P, X, Y;
	scanf ("%d%d", &N, &P);
	
	if (N < 1 || N > 1000 || P < 1 || P > 1000)
		return 0;
		
	for (i = 0; i < N; i++){
			scanf ("%d%d", &X, &Y);
			if ( X < 0 || X > 400 || Y < 0 || Y > 400 )
				return 0;
			if (X + Y >= P)
				c++;
	}
	printf ("%d", c);
						
}
