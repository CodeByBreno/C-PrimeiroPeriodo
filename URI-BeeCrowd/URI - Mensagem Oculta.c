#include <stdio.h>

main ()
{		
	int i, j, N, d, a;
	char vet[51], res[26];
	scanf ("%d ", &N);
	for (i = 0; i < N; i++){

		gets(vet);

		for (j = 0, a = 0; vet[j] != '\0'; j++){
			d = vet[j];

			if (d >= 65 && d <= 122){
				if (j == 0) 
					res[a++] = vet[j];
				else
					if (vet[j - 1] == ' ')
						res[a++] = vet[j];
			} /* fim do if */

		} /* fim do ciclo de leitura */

	res[a] = '\0';
	puts(res);

	}/* fim do ciclo principal */
}


/* compete online design event rating */
/*   u    r i  o    n l  i    n  e    */