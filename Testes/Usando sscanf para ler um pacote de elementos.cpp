#include <stdio.h>

main ()
{
	char dados[99];
	char nome[99];
	int idade;
	char sexo;
	float altura;
	
	printf ("Digite o nome, idade, sexo e altura do sujeito : ");
	gets (dados);
	
	sscanf (dados, "%s %d %c %f", &nome, &idade, &sexo, &altura);
	
	printf (nome);
	printf (" \n%d", idade);
	printf (" \n%c", sexo);
	printf (" \n%f", altura);
	
}
