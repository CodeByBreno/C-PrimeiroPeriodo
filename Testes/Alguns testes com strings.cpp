#include <stdio.h>

main ()
{
	char texto[99], teste[6] = {'t','e','s','t','e','\0'};
	printf ("Digite o texto: ");
	gets (texto);
	printf ("O texto digitado foi %s\n", texto);
	printf (teste);
	
}
