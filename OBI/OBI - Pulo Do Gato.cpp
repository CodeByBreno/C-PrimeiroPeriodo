#include <stdio.h>

main ()
{
	int N, i, P = 0;
	scanf ("%d", &N);
	int laj[N+1];
	
	for ( i = 0; i < N; i++)
		scanf ("%d", &laj[i]);	

	i = 0;
	
	while ( i < N - 1){
		if (laj[i + 1]){
			if (laj[i + 2]) 
				i += 2; 
			else
				i++;
			}
		else{
			if (laj[i + 2])
				i += 2;
			else{
				P = -2; 
				i = N;
				}
			}
		P++;	 
	}
	if ( N > 1)
		printf ("%d", P);
	else
		printf ("0");
	
}
