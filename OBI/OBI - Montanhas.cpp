#include <stdio.h>

main ()
{
	int K, i, b = 0;
	scanf ("%d", &K);
	int mont[K];

	for (i = 0; i < K; i++) scanf ("%d", &mont[i]);

	for (i = 1; i < K - 1; i++){
		if (mont[i + 1] > mont[i] && mont[i - 1] > mont[i]){
			b = 1;
			break;
		}	
	}
	
	if (b == 1) printf ("S");
	else printf ("N");
}
