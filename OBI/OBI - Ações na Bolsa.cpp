#include <stdio.h>
#include <string.h>

main ()
{
	int N, i, j, aux = 0;
	
	scanf ("%d", &N);
	
	int num[N];
		
	for (i = 0; i < N; i++)
		scanf ("%d", &num[i]);
	
	for (j = 0; j < N - 4; j++){
	 	for (i = j; i < j + 4; i++)
			num[i + 1] += num[i];	
		if (num[i] > aux)
			aux = num[i];
	}
	
	setbuf (stdin, NULL);
	printf ("%d", aux);
	
}
