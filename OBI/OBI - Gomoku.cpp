#include <stdio.h>

main ()
{
	int tabu[15][15], i, j, b = 0;

	for (i = 0; i < 15; i++)
		for (j = 0; j < 15; j++)	
			scanf ("%d", tabu[i][j]);

	for ( i = 0; i < 15; i++)
		for (j = 0; j < 15; j++){
			if (tabu[i][j] == 1){
				if (i <= 10) if (tabu[i+1][j] == 1 && tabu[i+2][j] == 1 && tabu[i+3][j] == 1 && tabu[i+4][j] == 1) { printf ("1"); b = 1;}
				if (j <= 10) if (tabu[i][j+1] == 1 && tabu[i][j+2] == 1 && tabu[i][j+3] == 1 && tabu[i][j+4] == 1 ) { printf ("1"); b = 1;}
				if (i >= 4 && j <= 10) if (tabu[i-1][j+1] == 1 && tabu[i-2][j+2] == 1 && tabu[i-3][j+3] == 1 && tabu[i-4][j+4] == 1) { printf ("1"); b = 1;}
				if (i <= 10 && j <= 10) if (tabu[i+1][j+1] == 1 && tabu[i+2][j+2] == 1 && tabu[i+3][j+3] == 1 && tabu[i+4][j+4] == 1) { printf ("1"); b = 1;}
				}
			if (tabu[i][j] == 2){
				if (i <= 10) if (tabu[i+1][j] == 2 && tabu[i+2][j] == 2 && tabu[i+3][j] == 2 && tabu[i+4][j] == 2){ printf ("2"); b = 2;}
				if (j <= 10) if (tabu[i][j+1] == 2 && tabu[i][j+2] == 2 && tabu[i][j+3] == 2 && tabu[i][j+4] == 2 ) { printf ("2"); b = 2;}
				if (i >= 4 && j <= 10) if (tabu[i-1][j+1] == 2 && tabu[i-2][j+2] == 2 && tabu[i-3][j+3] == 2 && tabu[i-4][j+4] == 2) { printf ("2"); b = 2;}
				if (i <= 10 && j <= 10) if (tabu[i+1][j+1] == 2 && tabu[i+2][j+2] == 2 && tabu[i+3][j+3] == 2 && tabu[i+4][j+4] == 2) { printf ("2"); b = 2;}
				}	
	}
	if (b == 0) printf ("0");
}
