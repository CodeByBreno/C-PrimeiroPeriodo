#include <stdio.h>

main ()
{
	float s = 1000;
	int i, Ano;
	printf ("Insira de qual ano se deseja saber o salario: ");
	scanf ("%d", &Ano);
	
	for (i = 0; i < Ano - 2005; i++)
		s += 1000*(0.015)*(i + 1);
		
	printf ("O salario dele nesse ano eh : %.2f ", s);
		
}
