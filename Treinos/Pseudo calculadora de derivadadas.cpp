#include <stdio.h>
#include <string.h>
#include <locale.h>

main ()
{
	setlocale (LC_ALL, "portuguese");
	int i;
	char a = '1', *p, string[99], lista[9][99] = {"x", "x^n", "ax^n", "sen(x)", "cos(x)", 
									"a^x", "loga(x)", "1/x", "arctg(x)"};
	
	while ( a == '1'){
		printf ("Insira a expressão : ");
		gets (string);
		for (i = 0, p = lista[0]; i < 9; i++, p += 99){
		if (!strcmp(string, p))
			switch (i){
				case(0):
					printf ("A derivada de \"%s\" vale : 1 \n", string);
					break;
				case(1):
					printf ("A derivada de \"%s\" vale : nx \n", string);
					break;
				case(2):
					printf ("A derivada de \"%s\" vale : nax \n", string);
					break;
				case(3):
					printf ("A derivada de \"%s\" vale : cos(x) \n", string);
					break;
				case(4):
					printf ("A derivada de \"%s\" vale : -sen(x) \n", string);
					break;
				case(5):
					printf ("A derivada de \"%s\" vale : (a^x)*ln(a) \n", string);
					break;
				case(6):
					printf ("A derivada de \"%s\" vale : 1/(x*ln(a)) \n", string);
					break;
				case(7):
					printf ("A derivada de \"%s\" vale : ln(x) \n", string);
					break;
				case(8):
					printf ("A derivada de \"%s\" vale : 1/(1 + x^2) \n", string);
					break;
				default:
					printf ("Expressão inválida\n ");	
				}
 		}
   	}
 }
