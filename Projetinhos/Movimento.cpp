#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define l 5
#define c 5

int x1, y1, x2, y2, x3, y3;
char terreno[l][c];

void movimento3(void)
{
	char a;
	int aux;
	aux = rand() % 4;
	if (aux == 1) a = 'w';
	if (aux == 2) a = 's';
	if (aux == 3) a = 'a';
	if (aux == 0) a = 'd';

	switch (a){
		case ('w'):
			if (y3 == 0) break; 
			terreno[y3][x3] = (char)176;
			terreno[--y3][x3] = 'C';
			break;
		case ('a'):
			if (x3 == 0) break; 
			terreno[y3][x3] = (char)176;
			terreno[y3][--x3] = 'C';
			break;
		case ('s'):
			if (y3 == l - 1) break; 
			terreno[y3][x3] = (char)176;
			terreno[++y3][x3] = 'C';
			break;
		case ('d'):
			if (x3 == c - 1) break; 
			terreno[y3][x3] = (char)176;
			terreno[y3][++x3] = 'C';
			break;
	}
	return;
}

void movimento2(void)
{
	char a;
	int aux;
	aux = rand() % 4;
	if (aux == 1) a = 'w';
	if (aux == 2) a = 's';
	if (aux == 3) a = 'a';
	if (aux == 0) a = 'd';

	switch (a){
		case ('w'):
			if (y2 == 0 || (x2 == x3 && y2 == y3)) break; 
			terreno[y2][x2] = (char)176;
			terreno[--y2][x2] = 'A';
			break;
		case ('a'):
			if (x2 == 0 || (x2 == x3 && y2 == y3)) break; 
			terreno[y2][x2] = (char)176;
			terreno[y2][--x2] = 'A';
			break;
		case ('s'):
			if (y2 == l - 1 || (x2 == x3 && y2 == y3)) break; 
			terreno[y2][x2] = (char)176;
			terreno[++y2][x2] = 'A';
			break;
		case ('d'):
			if (x2 == c - 1 || (x2 == x3 && y2 == y3)) break; 
			terreno[y2][x2] = (char)176;
			terreno[y2][++x2] = 'A';
			break;
	}
	return;
}

void movimento(void)
{
	char a;
	a = getche();
	switch (a){
		case ('w'):
			if (y1 == 0) break; 
			terreno[y1][x1] = (char)176;
			terreno[--y1][x1] = 'B';
			break;
		case ('a'):
			if (x1 == 0) break; 
			terreno[y1][x1] = (char)176;
			terreno[y1][--x1] = 'B';
			break;
		case ('s'):
			if (y1 == l - 1) break; 
			terreno[y1][x1] = (char)176;
			terreno[++y1][x1] = 'B';
			break;
		case ('d'):
			if (x1 == c - 1) break; 
			terreno[y1][x1] = (char)176;
			terreno[y1][++x1] = 'B';
			break;
	}
	return;
}

void exibir (void)
{
	int i, j;
	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++)
			printf ("%c", terreno[i][j]);
		printf ("\n");
		}
}

main ()
{
	int i, j, r = 1;

	for (i = 0; i < l; i++)
		for (j = 0; j < c; j++)
			terreno[i][j] = (char)176;

	y1 = l/2;
	x1 = c/2;
	y2 = 0;
	x2 = 0;
	y3 = l - 1;
	x3 = c - 1;
	terreno[y1][x1] = 'B';
	terreno[y2][x2] = 'A';
	terreno[y3][x3] = 'C';
	
	while (r){
		system ("cls");
		if (x1 == x2 && y1 == y2){
			printf ("Voce morreu :(\n");
			exit(1);
		}		
		if (x1 == x3 && y1 == y3){
			printf ("Voce morreu :(\n");
			exit(1);
		}		
		exibir ();
		movimento();
		movimento2();
		movimento3();
	}
	

}
