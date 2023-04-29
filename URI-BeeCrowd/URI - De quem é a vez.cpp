#include <stdio.h>
#include <string.h>

main ()
{
	char n1[99], n2[99], e1[6], e2[6];
	long int X, Y;
	int N, i;
	scanf ("%d", &N);
	for ( i = 0; i < N; i++){
		scanf ("%s %s %s %s", n1, e1, n2, e2);
		scanf ("%ld %ld", &X, &Y);
		if ((X + Y) % 2){ /* impar */
			if (!strcmp(e1, "PAR"))
				puts(n2);
			else
				puts(n1);
				}
		else{ /* par*/
			if (!strcmp(e2, "PAR"))
				puts(n2);
			else
				puts(n1);
				}			
	}			
}
