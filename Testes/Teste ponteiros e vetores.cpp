#include <stdio.h>

main ()
{
	int vet[3] = {8, 2, 3}, *p;
	
	p = vet; 
	
	/* A declaração do vetor vet[3] aloca 3 espaços subjacentes na 
	memoria para armazenar 3 dados do tipo int. Aqui o identificador 
	"vet" é na verdade a primeira posição da memoria alcada, sendo 
	portanto um ponteiro
	Logo, ao imprimir o valor *p obteremos 8 - o valor na primeira 
	memoria alocada pelo vetor - */
	
	printf ("%d\n", *p);
	
	int vet2[3][3] = {12, 2, 3, 
	                  0, -5, 8, 
					  0, 12, 5}, *pt;
	
	pt = vet2[2];
	
	/* Já aqui temos uma matriz, que nada mais é do que um vetor de 
	vetores. O termo vet2 (que não possui significado sozinho, 
	ojetivamente falando) é a primeira posição de memoria alocada 
	para um dos varios vetores que compõe a matriz. 
	Se especificarmos a qual desses vetores nos referimos, teremos 
	um ponteiro novamente. 
	Por exemplo, vet2[0] é a primeira posição de memoria alocada 
	para o primeiro vetor que compõe essa matriz (ou primeira 
	trinca de elementos, já que cada vetor que compõe essa matriz 
	tem 3 elementos) 
	Assim *p vai valer, nessa caso, 8  */
	
	printf ("%d\n", *pt);
}




