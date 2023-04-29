#include <stdio.h> 

main() 
{ 
	char string[100];
	int i;
	printf ("Entre com uma string: ");
	scanf ("%s", string); 
	for (i=0;i<100;i++) 
		if (string[i]=='\0') 
		break; 
	printf("A string \"%s\" possui %d caracteres", string, i);
}
