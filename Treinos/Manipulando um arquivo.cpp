#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char *string;

void escrita (FILE *arquivo)
{
	int i, e, flag = 0, T = 5;
	char aux;
	printf ("Insira o texto a ser adicionado no arquivo : \n");

	/* Usando alocação dinâmica de memoria para colocar um texto de 
	tamanho qualquer*/

	i = 0;
	string = ( char *) malloc(T*sizeof(char));
	while (1){
		scanf ("%c", &aux);
		if (aux == '\n') break;
		if(i >= T){
			T += 5;
			string = (char *) realloc (string, T*sizeof(char));
		};
		string[i++] = aux;		
	};

	T = i;
	for (i = 0; i < T; i++){
		if (i % 30 == 0 && i) flag = 1;
		e = putc (string[i], arquivo);
		if (string[i] != (char) e){
			printf ("Ocorreu um erro inesperado... \n");
			exit(3);
		}
		if (flag == 1 && string[i] == ' '){
			putc('\n', arquivo);
			flag = 0;
		}
	}
	putc (' ', arquivo);
	return;
}

void exibir (FILE *arquivo)
{
	int i;
	char e;
	do{
		e = (char) getc(arquivo);
		if (e == EOF) break;
		printf ("%c", e);
	} while (1);
}

main ()
{
	setlocale(LC_ALL, "portuguese");
	FILE *arquivo;
	char aux;
	int i, g;
	
	while (1){
		printf ("O que voce deseja fazer? \n");
		printf ("1 - Escrever algo novo do zero (Digite 1)\n");
		printf ("2 - Continuar a digitação de onde parou (Digite 2)\n");
		printf ("3 - Ver o material já escrito (Digite 3)\n");
		printf ("4 - Sair (Digite 4)\n");
		scanf ("%d", &g);
		setbuf (stdin, NULL);
		switch (g){
			case (1): 
				arquivo = fopen ("murilica.txt", "w+");
				escrita (arquivo);
				printf ("\nTexto inserido com sucesso\nAperte alguma tecla para continuar");
				fclose(arquivo);
				getchar();
				break;
			case (2):
				arquivo = fopen ("murilica.txt", "a+");
				escrita (arquivo);
				printf ("\nTexto inserido com sucesso\nAperte alguma tecla para continuar");
				fclose(arquivo);
				getchar();
				break;
			case (3):
				arquivo = fopen ("murilica.txt", "r+");
				if (!arquivo){
					printf ("O arquivo nao existe! Crie-o antes de tentar le-lo");
					printf ("\nDigite alguma coisa ");
					getchar();
					break;
				}
				exibir (arquivo);
				printf ("\nDigite alguma coisa para continuar\n");
				fclose(arquivo);
				getchar();
				break;
			case(4):
				printf ("Flw\n");
				exit(1);
			default:
				printf ("Valor inválido\n");
				break;
		}
		system ("cls");
	}

	free(string);
	fclose(arquivo);
	
}
