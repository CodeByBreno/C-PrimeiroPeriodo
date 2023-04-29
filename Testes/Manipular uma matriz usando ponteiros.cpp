#include <stdio.h>

main ()
{
	int i, matriz[3][4], *p;
	
	for (i = 1, p = matriz[0]; i < 13; i++ )
		*p++ = i;

	for (i = 0, p = matriz[0]; i < 12; i++){
		printf (" %02d ", *p);
		if ((i+1) % 4 == 0)
			printf ("\n");
		p++;
	}
		
}
