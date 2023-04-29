#include <stdio.h>

main ()
{
	int i, d, t, z;
	char vet[51];

	while (scanf ("%[^\n]s", vet) != EOF){
		for (i = 0; i < 51; i++){
			d = vet[i];
			if ((d >= 65 && d <= 90)){
				d += 13;
				if (d > 90) d -= 26;
				vet[i] = d;
				}
			if (d >= 97 && d <= 122){
				d += 13;
				if (d > 122) d-= 26;
				vet[i] = d;
				}
			}
		printf ("%s\n", vet);
		scanf ("%c", &z);
	}
}
