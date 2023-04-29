#include <stdio.h>

main ()
{
	int i, pain = 0, C;
	
	scanf ("%d", &C);
	
	char tipos[C];
	
	scanf ("%s", tipos);
	
	for (i = 0; i < C; i++){
		if (tipos[i] == 'P')
			pain += 2;
		if (tipos[i] == 'C')
			pain += 2;
		if (tipos[i] == 'A')
			pain += 1;
		if (tipos[i] == 'D')
			pain += 0;
	}
	printf ("%d", pain);
}
