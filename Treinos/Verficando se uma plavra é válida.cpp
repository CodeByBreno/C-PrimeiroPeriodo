#include <stdio.h>

main ()
{
	char vet[51];
	int i, t, d, cont = 0;
	scanf ("%[^\n]s", vet);

	for (i = 0; vet[i] != '\0'; i++) t++;

	printf ("%d\n", t);

	for (i = 0; i < t - 2; i++){
		d = vet[i];
		printf ("%c %d  ", vet[i], i);
		if ((d >= 65 && d <= 90) || (d >= 97 && d <= 122)) cont++;
		else{
			cont = 0;
			break;
		}
	}
	d = vet[t-1];
	printf ("%d [%c]  ", cont, vet[t-1]);
	if (cont){
		if ((d >= 65 && d <= 90) || (d >= 97 && d <= 122) || (d == 46)) printf ("valido\n");
		else printf ("invalido\n"); }
	else printf ("invalido\n");
		
}
