/* strstr.c */
#include <stdio.h>
#include <string.h>
 
int main(void)
{
   char *psResultado;
   char sFrase[] = "isto e um teste";
 
   printf("\nEndere�o Inicial = %d", sFrase );
 
   /* A fun��o retornar� o endere�o correspondente � localiza��o do "to" */
   psResultado = strstr(sFrase, "to");
 
   printf("\nEndere�o inicial para a pesquisa = %d\n", psResultado );
   printf("\nEndere�o inicial para a pesquisa = %s\n", psResultado );
   return 0;
}
