#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale (LC_ALL, "portuguese");
	int i, a;
	float vetor[10], menor;
	for ( i = 0; i < 10; i++ ){
		printf ("Insira um valor para a posi��o %d : ", i);
		scanf ("%f", &vetor[i]);
	}
	printf ("\n");
	for ( a = 0, i = 1; i < 10; i++){
		if (vetor[a] >= vetor[i])
			a = i;
	}
	printf ("A posi��o do menor valor �: %d", a);
}
