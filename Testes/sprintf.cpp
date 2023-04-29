#include <stdio.h> 

main() 
{
	int i; 
	char string1[99] = "B"; 
	puts( "Entre um valor inteiro: "); 
	scanf("%d", &i); 
	sprintf(string1,"Valor de i = %d", i); 
	puts(string1);
}
