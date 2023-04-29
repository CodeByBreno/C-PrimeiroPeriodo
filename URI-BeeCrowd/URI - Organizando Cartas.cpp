#include <stdio.h>

main ()
{
	int cartas[5], i = 0, b = 0;
	
	for (i = 0; i < 5; i++)
		scanf ("%d", &cartas[i]);
	
	for (i = 1; i < 5; i++){
		if (cartas[i - 1] > cartas[i]) b++;
		if (cartas[i - 1] < cartas[i]) b--;
	}
	
	if (b == 4) printf ("D\n");
	else {  if (b == -4) printf ("C\n");
			else printf ("N\n"); }
			
			
}
