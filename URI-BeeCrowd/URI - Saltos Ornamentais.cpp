#include <stdio.h>

main ()
{
	int C, i, j, l;
	float g, n[7], R = 0;

	scanf ("%d", &C);
	float r[C];
	char nome[C][99];

	
	for (i = 0; i < C; i++){
	
		scanf ("%s", nome[i]);
		setbuf (stdin, NULL);
		scanf ("%f", &g);

		for (j = 0; j < 7; j++)
			scanf ("%f", &n[j]);
		

		for ( l = 1; l < 7; l++)
			for (j = 0; j <= l; j++)
				if (n[l] < n[j]){
					R = n[l];
					n[l] = n[j];
					n[j] = R;   }
			
		for (R = 0, j = 1; j < 6; j++) R += n[j];

		r[i] = R*g;	
	}

	for (i = 0; i < C; i++){
		printf ("%s %.2f\n", nome[i], r[i]);
	}	
}
