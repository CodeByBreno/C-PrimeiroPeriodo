#include <stdio.h>

main ()
{
	int a, d, A, D, A1, D1, D2, i, M;
	scanf ("%d %d", &a, &d);
	
	for (i = 0; i < a; i++){
		scanf ("%d", &A);
		if (i == 0) A1 = A;
		else (A < A1) ? (A1 = A) : (A = A);		
	}

	for (i = 0; i < d; i++){
		scanf ("%d", &D);
		if (i == 0) D1 = D;
		else{
			if (i == 1) D2 = D;
			else
					if (D <= D1 || D <= D2){
						if (D <= D1) D1 = D;
						else D2 = D;
						}		
			}	
	}

	(D1 > D2) ? (M = D1) : (M = D2);

	if (D1 == D2){
		if (A1 >= D1) printf ("N");
		else printf ("Y"); }
	else{
		if (A1 >= M) printf ("N");
		else printf ("Y"); }
}
