#include <stdio.h>

main ()
{
	char vet[1000], vet2[1000];
	int A, i, j, t = 0, t2 = 0;
	
	do{
		scanf ("%d %s", &A, vet) ;
		A = A + 47;
		for (i = 0; i < 1000; i++) { 
			if (vet[i] == '\0') i = 1000;
			else t++; }
			
		for (i = 0; i < t; t++){
			j = vet[i];
			if (j == A)
				vet[i] = ' '; }
		
		for ( j = 0, i = 0; i < t, j = 0 ; i++)
			if (vet[i] == '0' || vet[i] == ' ') i++;
			else j = 1;

		j = i;
	
		for (i = 0; i < t; i++)
			vet2[i] = vet[j + i];

		puts(vet2);	
	
	} while (A || vet);
}
