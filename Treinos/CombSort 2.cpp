#include <stdio.h>

main ()
{
	int vet[] = {5,9,6,4,8,3,7,1,8,2}, gap, i, j, flag, aux;
	gap = 10;
		do {
			if (gap != 1) gap /= 1.3;
			for (i = 0, j = gap, flag = 0; j < 10; i++, j++)
				if (vet[i] > vet[j]){
					aux = vet[i];
					vet[i] = vet[j];
					vet[j] = aux;
					flag = 1;
				}
		} while (flag != 0);
	
	for (i = 0; i < 10; i++) printf ("%d", vet[i]);
}
