#include <stdio.h>

main (){

	int N, i, j, cont = 0, M = 0;
	scanf ("%d", &N);
	char matriz[N][N], lixo;
	for (i = 0; i < N; i++){
		scanf ("%c", &lixo);
		for (j = 0; j < N; j++)
			scanf ("%c", &matriz[i][j]);
	}

	/* Percorrendo o campo e contando o número máximo de comidas */
	for (i = 0; i < N; i++){
		if (i % 2 == 0) for (j = 0; j < N; j++){
				if (matriz[i][j] == 'o') cont++;
				if (matriz[i][j] == 'A'){
					if (cont > M) M = cont;
					cont = 0;
					} 		
				}
		else for (j = N - 1; j >= 0; j--){
				if (matriz[i][j] == 'o') cont++;
				if (matriz[i][j] == 'A'){
					if (cont > M) M = cont;
					cont = 0;
					} 		
				}
	}
	if (cont > M) M = cont;
	printf ("%d\n", M);
}
