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
		sscanf (b, "%s %s", s, r);
		
		if (!strcmp (s, "tesoura"))	
			if (!strcmp(r, "papel") || !strcmp(r, "lagarto")) printf ("Caso #%d: Bazinga!\n", i + 1);
			else{
				if (!strcmp(r, s)) printf ("Caso #%d: De novo!\n", i + 1);
				else printf ("Caso #%d: Raj trapaceou!\n", i + 1);
				}
		if (!strcmp (s, "papel"))	
			if (!strcmp(r, "pedra") || !strcmp(r, "Spock")) printf ("Caso #%d: Bazinga!\n", i + 1);
			else{
				if (!strcmp(r, s)) printf ("Caso #%d: De novo!\n", i + 1);
				else printf ("Caso #%d: Raj trapaceou!\n", i + 1);
				}
		if (!strcmp (s, "pedra"))	
			if (!strcmp(r, "lagarto") || !strcmp(r, "tesoura")) printf ("Caso #%d: Bazinga!\n", i + 1);
			else{
				if (!strcmp(r, s)) printf ("Caso #%d: De novo!\n", i + 1);
				else printf ("Caso #%d: Raj trapaceou!\n", i + 1);
				}
		if (!strcmp (s, "lagarto"))	
			if (!strcmp(r, "Spock") || !strcmp(r, "papel")) printf ("Caso #%d: Bazinga!\n", i + 1);
			else{
				if (!strcmp(r, s)) printf ("Caso #%d: De novo!\n", i + 1);
				else printf ("Caso #%d: Raj trapaceou!\n", i + 1);
				}
		if (!strcmp (s, "Spock"))	
			if (!strcmp(r, "tesoura") || !strcmp(r, "pedra")) printf ("Caso #%d: Bazinga!\n", i + 1);
			else{
				if (!strcmp(r, s)) printf ("Caso #%d: De novo!\n", i + 1);
				else printf ("Caso #%d: Raj trapaceou!\n", i + 1);
				}
	
		}
}
