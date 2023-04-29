#include <stdio.h>

main ()
{
	char dados[99];
	char nome[99];
	int idade;
	char sexo;
	float altura;
	
	printf ("Digite a idade, sexo e altura do sujeito : ");
	sscanf (dados, "%s %d %c %f", &nome, &idade, &sexo, &altura);
	
	printf ("\n\n");
	printf (dados);
	
}
