#include <stdio.h>

main ()
{
	int C, Boi, Boto, M, I;
	scanf ("%d %d %d %d %d", &C, &Boi, &Boto, &M, &I);
	printf("%d\n", C*300 + Boi*1500 + Boto*600 + M*1000 + I*150 + 225);
}
