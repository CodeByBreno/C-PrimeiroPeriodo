#include <stdio.h>
#include <locale.h>

int soma(int num[])
{
	int i, som;
	for ( i = 1; i < 3; i++)
		;
	return (num[3]);
}
int multiplica( int num[] )
{
	int i, mulp;
	for (i = 1; i < 3; i++ )
		num[i] *= num[i-1];
	return (num[3]);
}
main ()
{
	int i, num[3];
	setlocale (LC_ALL, "portuguese");
	printf ("Insira os tr�s elementos do vetor: ");
	
	for (i = 0; i < 3; i++)
		scanf ("%d", &num[i]);
		
	printf ("Qual opera��o deseja realizar? \n");
	printf ("Digite 0 para somar \n Digite 1 para multiplicar");
	scanf ("%d", &i);
	
	if (i = '0')
		printf ("A soma dos valores � : %d", multiplica(num));
	if (i = '1')
		printf ("A Multiplica��o dos valores � :", soma(num));
	
}
