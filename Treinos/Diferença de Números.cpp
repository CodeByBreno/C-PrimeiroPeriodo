#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale (LC_ALL, "portuguese");
	int A, B;
	char i = '1';
	do {
	printf ("Insira o valor A: ");
	scanf ("%d", &A);
	printf ("Insira o valor B: ");
	scanf ("%d", &B);
	printf ("A diferença vale: ");
	(A > B) ? printf("%d", A - B) : printf ("%d", B - A);
	printf ("\n\nCalcular novamente? \nSe sim, digite 1 \nSe não, digite qualquer outra coisa: ");
	scanf (" %c", &i);
	if (i == '1')
	printf ("\n\n");
	} while (i == '1');
}
