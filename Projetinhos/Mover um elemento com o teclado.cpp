#include <stdio.h>

main ()
{
	char mov, malha[9][9];
	int x = 4, y = 4, i, j, b = 1;
	
	while (b == 1){
		
		for (i = 0; i < 9; i++){
			for (j = 0; j < 9; j++){
				malha[i][j] = ' ';
				if (i == 0 || i == 8)
					malha[i][j] = '=';
				if (j == 0 || j == 8)
					malha[i][j] = '|';	
				if (i == x && j == y)
					malha[i][j] = '@';
				printf (" %c", malha[i][j]);
			}
			printf ("\n");
		}
		
		scanf ("%c", &mov);
		
		if (i != 1 && i != 7 && j != 1 && j != 7 ){
			if (mov == 'w'){
				malha[i][j] = ' ';
				x = ++i;
				malha[x][j] = '@';
			}
			if (mov == 's'){
				malha[i][j] = ' ';
				x = --i;
				malha[x][j] = '@';
			}
			if (mov == 'a'){
				malha[i][j] = ' ';
				y = --j;
				malha[i][y] = '@';
			}	
			if (mov == 'd'){
				malha[i][j] = ' ';
				y = ++j;
				malha[i][j] = '@';
			}
		}
	}	
}
