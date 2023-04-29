#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main ()
{
	int a = 0, N, i;
	char aux, gab[80], res[80];
	
	scanf ("%d", &N);
	
		
	scanf ("%s", gab);
	setbuf (stdin, NULL);
	scanf ("%s", res);
	
		
	
	for (i = 0; i < N; i++)
		if (gab[i] == res[i])
			++a;
	
	printf ("%d", a);
}
