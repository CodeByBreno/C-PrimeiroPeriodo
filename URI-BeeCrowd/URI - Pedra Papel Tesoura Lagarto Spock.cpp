#include <stdio.h>

main ()
{
	int cont, i, K, a, b;
	char s[8], r[8];
	scanf ("%d", &K);
	for (cont = 0; cont < K; cont++){
		scanf ("%s %s", r, s);

		if (r[0] == 't'){
			if (s[0] == 'l' || (s[0] == 'p' && s[1] == 'a')) printf ("rajesh\n");
			else {
				if (s[0] == 't') printf ("empate\n");
				else printf ("sheldon\n");
			}
		}
		
		if (r[0] == 'p' && r[1] == 'a' ){
			if (s[0] == 's' || (s[0] == 'p' && s[1] == 'e')) printf ("rajesh\n");
			else {
				if (s[0] == 'p' && s[1] == 'a') printf ("empate\n");
				else printf ("sheldon\n");
			}
		}

		if (r[0] == 'p' && r[1] == 'e' ){
			if (s[0] == 'l' || s[0] == 't') printf ("rajesh\n");
			else {
				if (s[0] == 'p' && s[1] == 'e' ) printf ("empate\n");
				else printf ("sheldon\n");
			}
		}

		if (r[0] == 'l'){
			if (s[0] == 's' || (s[0] == 'p' && s[1] == 'a')) printf ("rajesh\n");
			else {
				if (s[0] == 'l') printf ("empate\n");
				else printf ("sheldon\n");
			}
		}

		if (r[0] == 's'){
			if (s[0] == 't' || (s[0] == 'p' && s[1] == 'e')) printf ("rajesh\n");
			else {
				if (s[0] == 's') printf ("empate\n");
				else printf ("sheldon\n");
			}
		}	
	}
}
