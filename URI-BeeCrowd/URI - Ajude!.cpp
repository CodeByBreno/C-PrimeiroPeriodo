#include <stdio.h>

main ()
{
	typedef struct {
		char C;
		int tempo;
		char estado[20];
	} ficha;
	int N, i, j, A, e = 0, time;
	
	while (scanf("%d", &N) , N){	
		ficha vet[N]; 
		char m[N], lixo;
		int T[N];
		scanf ("%c", &lixo);
		A = 0;

		for (i = 0, j = 0; i < N; i++){
			scanf ("%c %d %s", &vet[i].C, &vet[i].tempo, vet[i].estado);
			scanf ("%c", &lixo);
			if (vet[i].estado[0] == 'c'){
				A++;
				T[j] = vet[i].tempo;
				m[j] = vet[i].C;
				j++;
				}
			}

		if (A){
			for (i = 0, time = 0; i < A; i++, e = 0){
				for (j = 0; j < N; j++)
					if (vet[j].C == m[i] && vet[j].estado[0] != 'c') e++;
				time += e*20 + T[i]; 
				}
			printf ("%d %d\n", A, time);
		}
		else printf ("0 0\n");
	};
	

}
