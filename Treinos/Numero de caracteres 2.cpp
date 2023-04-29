#include <stdio.h>

main ()
{
	char cadeia[99];
	int i;
	printf ("Digite uma string: ");
	scanf ("%s", cadeia);
	for (i = 0; i < 99; i++){
		if (cadeia[i] == '\0'){
		printf ("A cadeia inserida tem %d caracteres", i-1);	
		break;	
		}
	}
}
