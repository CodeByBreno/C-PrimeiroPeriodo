#include <stdio.h>

int TQP(int a)
{
	int i, b = 0;
	for (i = 0; i < a; i++)
		if (i*i == a) b = 1;
	return b;
	
}

main ()
{
	int a;
	printf ("Insira um valor para testar se ele eh quadrado perfeito : ");
	scanf ("%d", &a);
	if (TQP(a)) printf ("eh sim\n");
	else	printf ("Num eh");
}
