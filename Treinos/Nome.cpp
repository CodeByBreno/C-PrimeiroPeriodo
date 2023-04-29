#include <stdio.h>
#include <string.h>
#include <locale.h>

main ()
{
	setlocale (LC_ALL, "portuguese");
	int a, i, resposta;
	char nc[99], nome[21], sobrenome[21];
	char nulo[99];
	printf ("Olá! Insira seu nome por favor: ");
	gets (nc);
	for (i = 0; i < 99; i++){
		if ( nc[i] == ' '){
		a = i;
		break;
	}
	}
	for ( i = 0; i < 99; i++)
		nulo[i] = '0';
	strncpy (nome, nc, a);
	printf ("Posso chama-lo de %s ?\n", nome);
	printf ("Digite 'S' se Sim e qualquer outra coisa se Não : ");
	
	scanf ("%c", &resposta);
	if (resposta == 'S')
	printf ("Obrigado!\n");
	else
	printf ("Fila da puta\n");
}
