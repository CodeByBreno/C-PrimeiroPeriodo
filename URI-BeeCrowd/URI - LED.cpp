#include <stdio.h>

int strlen (char *vet)
{
	int i, t;
	for (i = 0, t = 0; vet[i] != '\0'; i++) t++;
	return (t);
}
main ()
{
	char a, vet[101];
	int led, i, j, K, t;
	scanf ("%d", &K);
	for (j = 0; j < K; j++){
		scanf ("%c", &a);
		scanf ("%100[^\n]s", vet);
		for (i = 0, led = 0; i < strlen(vet); i++){
			if (vet[i] == '1') led += 2;
			if (vet[i] == '4') led += 4;
			if (vet[i] == '7') led += 3;
			if (vet[i] == '8') led += 7;
			if (vet[i] == '6' || vet[i] == '0' || vet[i] == '9') led += 6;
			if (vet[i] == '2' || vet[i] == '3' || vet[i] == '5') led += 5;
		}
			printf ("%d leds\n", led);
	}
}
