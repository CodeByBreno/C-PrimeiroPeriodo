#include <stdio.h>
#include <string.h>

main ()
{
	int i, j, aux, C = 0, b = 1;
	char bre[15], code[15], string[27] = "ABCDEFGHIJKLMNOPQRSTUVWXY";
	char teste[27] = "abcdefghijklmnopqrstuvwxyz";
	char teste2[11] = "0123456789";
	
	scanf ("%s", code);
	aux = strlen(code);
	
	for (i = 0; i < aux; i++){
		
		for (j = 0; j < 10; j++)
			if (code[i] == teste2[j])
				b = 0;
				
		if (code[i] == 'Z')
			b = 0;
			
		for (j = 0; j < 26; j++)
			if (code[i] == teste[j])
				b = 0;	
		}

	if (b == 1){
		for (i = 0; i < aux; i++)
			for (j = 0; j < 26; j++){
				if (code[i] == 'S')
				bre[i] = 7;
			else
				if (code[i] == '-'){
					b = i;
					C = 1;
				}
				if (code[i] == string[j])
					bre[i] = j/3 + 2;
			}		
			if (C == 1){
				for (i = 0 ; i < b; i++)
					printf ("%d", bre[i]);	
				printf("-");
				for (i = b + 1; i < aux; i++)
					printf ("%d", bre[i]);
				}
			else
				for (i = 0; i < aux; i++)
					printf ("%d", bre[i]);
			
	}
}
