#include <stdio.h>

main ()
{
	short unsigned int i, n;
	for (i = 33, n = 4; i < 255; i++){
		printf ("(%03d) %c ", i, i);
		if (i == n*10){
			printf (" \n");
			++n;
			}
	}
}
