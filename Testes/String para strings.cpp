#include <stdio.h>
#include <string.h>

main ()
{
	char b[99], s[99], r[99];
	int N, i, j, aux, a;

	scanf ("%d", &N);
	setbuf (stdin, NULL);

	for (i = 0; i < N; i++){
		
		gets (b);
		sscanf (b, "%s %s", r, s);
		puts(s);
		puts(r);
}
}
