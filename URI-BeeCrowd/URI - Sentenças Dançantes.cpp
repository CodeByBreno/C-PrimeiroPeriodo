#include <stdio.h>

main ()
{
	int i, d, a, c;
	char vet[51], lixo;
	while (scanf("%[^\n]s", vet) != EOF){
		scanf ("%c", &lixo);
		a = 0;
		c = 2;
		for (i = 0; i < 51; i++){
			d = vet[i];
	
			if (vet[i] == ' ') {
				if (c % 2 == 0){ a = 1; c++; }
				else { a = 0; c++; }
				}

			if (i % 2 == a){
				if (d >= 97 && d <= 122){
					d -= 32;
					vet[i] = d;
					}
			}
			else {
				if (d >= 65 && d <= 90){
					d += 32;
					vet[i] = d;
					}
			}
		}
		puts(vet);
	}
}
