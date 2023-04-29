#include <stdio.h>
#include <string.h>
#include <locale.h>

main ()
{
	setlocale (LC_ALL, "portuguese");
	int i;
	char *p, string[99], lista[9][99] = {"x", "x^n", "ax^n", "sen(x)", "cos(x)", 
									"a^x", "loga(x)", "1/x", "arctg(x)"};
	
	printf ("Insira a expressão : ");
	gets (string);
	
	for (i = 0, p = lista[0]; i < 9; i++){
		if (!strcmp(string, p))
			switch (i){
				case(0):
					printf ("A derivada de \"%s\" vale : 1", string);
					break;
				case(1):
					printf ("A derivada de \"%s\" vale : nx", string);
					break;
				case(2):
					printf ("A derivada de \"%s\" vale : nax", string);
					break;
				case(3):
					printf ("A derivada de \"%s\" vale : cos(x)", string);
					break;
				case(4):
					printf ("A derivada de \"%s\" vale : -sen(x)", string);
					break;
				case(5):
					printf ("A derivada de \"%s\" vale : (a^x)*ln(a)", string);
					break;
				case(6):
					printf ("A derivada de \"%s\" vale : 1/(x*ln(a))", string);
					break;
				case(7):
					printf ("A derivada de \"%s\" vale : ln(x)", string);
					break;
				case(8):
					printf ("A derivada de \"%s\" vale : 1/(1 + x^2)", string);
					break;
				default:
					printf ("Expressão inválida");	
				}
 	}
			
}
