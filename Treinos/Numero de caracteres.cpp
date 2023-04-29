#include <stdio.h>

main ()
{
	char cadeia[100], cadeia2[100], cadeia3[100];
	int i, valor[3];
	
	printf ("Insira uma palavra: ");
	scanf ("%s", cadeia);
	
	for (i = 0; i < 100; i++){
		if (cadeia[i] == '\0'){
		valor[0] = i;
		break;
	    }
	}
		
	printf ("Insira uma segunda palavra: ")	;
	scanf ("%s", cadeia2);
	
	for (i = 0; i < 100; i++){
		if (cadeia2[i] == '\0'){
		valor[1] = i;
		break;
	    }
	}
	
	printf ("Insira uma terceira palavra: ");
	scanf ("%s", cadeia3);
	
	for (i = 0; i < 100; i++){
		if (cadeia3[i] == '\0'){
		valor[2] = i;
		break;
	    }
	}
	
	printf ("A cadeia \"%s\" tem %d caracteres\n", cadeia, valor[0]);
	printf ("A cadeia \"%s\" tem %d caracteres\n", cadeia2, valor[1]);
	printf ("A cadeia \'%s\" tem %d caracteres\n", cadeia3, valor[2]);
	printf (cadeia2);
	
}

