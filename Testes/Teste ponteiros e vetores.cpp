#include <stdio.h>

main ()
{
	int vet[3] = {8, 2, 3}, *p;
	
	p = vet; 
	
	/* A declara��o do vetor vet[3] aloca 3 espa�os subjacentes na 
	memoria para armazenar 3 dados do tipo int. Aqui o identificador 
	"vet" � na verdade a primeira posi��o da memoria alcada, sendo 
	portanto um ponteiro
	Logo, ao imprimir o valor *p obteremos 8 - o valor na primeira 
	memoria alocada pelo vetor - */
	
	printf ("%d\n", *p);
	
	int vet2[3][3] = {12, 2, 3, 
	                  0, -5, 8, 
					  0, 12, 5}, *pt;
	
	pt = vet2[2];
	
	/* J� aqui temos uma matriz, que nada mais � do que um vetor de 
	vetores. O termo vet2 (que n�o possui significado sozinho, 
	ojetivamente falando) � a primeira posi��o de memoria alocada 
	para um dos varios vetores que comp�e a matriz. 
	Se especificarmos a qual desses vetores nos referimos, teremos 
	um ponteiro novamente. 
	Por exemplo, vet2[0] � a primeira posi��o de memoria alocada 
	para o primeiro vetor que comp�e essa matriz (ou primeira 
	trinca de elementos, j� que cada vetor que comp�e essa matriz 
	tem 3 elementos) 
	Assim *p vai valer, nessa caso, 8  */
	
	printf ("%d\n", *pt);
}




