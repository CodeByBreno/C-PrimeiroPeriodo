#include <stdio.h>
#include <string.h>

main ()
{
	char a[1000], aux;
	int N, i, b, j;
	scanf ("%d", &N);
	for (i = 0; i < N; i++){
		setbuf (stdin, NULL);
		gets (a);	
		for (j = 0; j < strlen(a); j++){
			b = a[j];
			if ((b >= 65 && b <= 90)|| (b >= 97 && b <= 122)){
				b += 3;
				a[j] = b; }
		}
		for (j = 0; j < strlen(a)/2; j++){
			aux = a[j];
			a[j] = a[strlen(a) - j - 1];	
			a[strlen(a) - j - 1] = aux;
		}
		for (j = strlen(a)/2; j < strlen(a); j++){
			b = a[j];
			--b;
			a[j] = b;
		}
		puts(a);
	}
}
