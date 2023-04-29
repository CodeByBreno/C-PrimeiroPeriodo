#include <stdio.h> 

main()
{   
	int i, j; 
	float k;    
	char string1[]= "10 20 5.89";   
 	sscanf(string1, "%d %d %f", &i, &j, &k); 
 	printf("Valores lidos: %d, %d, %.2f", i, j, k); 
 }
