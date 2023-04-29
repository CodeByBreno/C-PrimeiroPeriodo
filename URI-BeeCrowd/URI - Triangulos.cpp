#include <stdio.h>

main ()
{
	int var[4], i, j, aux;
	for (i = 0; i < 4; i++) scanf ("%d", &var[i]);
	if (var[0] < var[1] + var[2] && var[1] < var[0] + var[2] && var[2] < var[0] + var[1] || var[1] < var[3] + var[2] && var[2] < var[1] + var[3] && var[3] < var[1] + var[2] || var[0] < var[3] + var[2] && var[2] < var[0] + var[3] && var[3] < var[0] + var[2] || var[0] < var[3] + var[1] && var[1] < var[0] + var[3] && var[3] < var[0] + var[1])
		printf ("S\n");
	else
		printf ("N\n");
				
}
