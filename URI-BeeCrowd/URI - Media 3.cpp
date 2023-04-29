#include <stdio.h>

main ()
{
	float A, B, C, D, E, m;
	scanf ("%f %f %f %f", &A, &B, &C, &D);
	m = (A*2 + B*3 + C*4 + D*1)/10;
	printf ("Media: %f\n", m);
	if (m >= 7) printf ("Aluno aprovado.\n");
	if (m < 5) printf ("Aluno reprovado.\n");
	if (m >= 5 && m < 7){
		printf ("Aluno em exame.\n");
		printf ("Nota do exame: ");
		scanf ("%f", &E);
		m = (m + E)/2;
		if (m >= 5) printf ("Aluno aprovado.\n");
		else printf ("Aluno reprovado\n");
		printf ("Media final: %.1f\n", m);
	}		
}
