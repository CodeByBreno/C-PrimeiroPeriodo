#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void strcpy(char vet[99], char vet2[99])
{
	int i;
	char aux;
	for (i = 0; i < 99; i++){
		aux = vet[i];
		vet[i] = vet2[i];
		vet2[i] = aux;
	}
	return;
}

void limpatela(void)
{
	printf ("Limpando a tela. ");
	Sleep(100);
	printf (". ");
	Sleep(100);
	printf (".");
	Sleep(100);
	system("cls");
	return;
}
void exibir (int N, char *vet)
{
	int i;
	for (i = 0; i < N; i++)
		printf ("(%03d) : %s\n", i, vet + i*99);
	return;
}

void troca (int a, int b, char *vet)
{
	char aux[99];
	strcpy(vet + a*99, aux);
	strcpy(vet + b*99, vet + a*99);
	strcpy(aux, vet + b*99);
	return;
}
main ()
{
	int N, i, a, b, r = 1;
	printf ("Insira a quantidade de frases que seraum introduzidas : ");
	scanf ("%d", &N);

	char vet[N][99], lixo;
	scanf ("%c", &lixo);

	printf ("Muito bem, agora insira as frases: \n");
	for (i = 0; i < N; i++){
		scanf ("%[^\n]", vet[i]);
		scanf ("%c", &lixo);
		}
		
	while (r){

		limpatela();
		exibir(N, vet[0]);
		printf ("\n\nCaso deseje finalizar a execução, digite 0 0");
		printf ("\nOu digite os numeros das posicoes que deseja trocar : ");
		scanf ("%d %d", &a, &b);
		if (a >= N || b >= N){
			printf ("\n\nValor invalido, por favor verifique que os numeros inseridos sejam menores que o total de frases\n");
			printf ("\nDigite qualquer tecla para continuar... \n");
			getch();
			}
		else {
			if (!a && !b) exit(2);
			troca(a, b, vet[0]);
		}
		
	}

}
