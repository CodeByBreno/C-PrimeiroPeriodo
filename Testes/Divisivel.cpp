#include <stdio.h>

int EDivisivel(int a, int b)
{
	if (a % b == 0)
		return 1;
	else
		return 0;
}

main ()
{
	int a, b;
	printf ("Insira os valores a serem testados : ");
	scanf ("%d %d", &a, &b);
	printf ("%seh divisivel", EDivisivel(a,b) ? "" : "naum ");
	
}
