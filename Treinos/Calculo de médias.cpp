#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale (LC_ALL, "portuguese");
    float nota[4], NE, M1 = 0, M2;
    int i;
    
	for (i = 0; i < 4; i++){
		printf ("Insira o valor da nota %d : ", i+1);
		scanf ("%f", &nota[i]);
	}
	for (i = 0; i < 4; M1 += nota[i]/4, i++);
	if (M1 >= 7)
	printf ("Aprovado\n\n");
	else{
		printf ("Insira o valor da nota do exame : ");
		scanf ("%f", &NE);
		M2 = (M1 + NE)/2;
		if (M2 >= 5)
		printf ("Aprovado em exame\n\n");
		else
		printf ("Reprovado\n\n");
	}
	printf ("A média do aluno foi: %.2f\n", M1);
	if (M1 < 7)
	printf ("A média final do aluno foi: %.2f\n", M2);
}

