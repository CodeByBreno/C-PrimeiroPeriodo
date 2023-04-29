/* strstr.c */
#include <stdio.h>
#include <string.h>
 
int main(void)
{
   char *psResultado;
   char sFrase[] = "isto e um teste";
 
   printf("\nEndereço Inicial = %d", sFrase );
 
   /* A função retornará o endereço correspondente à localização do "to" */
   psResultado = strstr(sFrase, "to");
 
   printf("\nEndereço inicial para a pesquisa = %d\n", psResultado );
   printf("\nEndereço inicial para a pesquisa = %s\n", psResultado );
   return 0;
}
