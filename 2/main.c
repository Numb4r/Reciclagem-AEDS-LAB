#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define LENGHT 100
int vet[100];
void init()
{
	for (int i = 0; i < LENGHT; i++)
	{
		vet[i] = rand() % 1000;
	}
}
int verificacaoPrimo(int n)
{
	int x = 2;
	while (x <= floor(sqrt(n)))
	{
		if (n % x == 0)
		{
			return 0;
		}
		x++;
	}
	return 1;
}
void primos(int n)
{
	int i = 0;
	while (i < n)
	{
		if (verificacaoPrimo(vet[i]))
			printf("%d\n", vet[i]);
		i++;
	}
	scanf("%d", &i);
}
void impares(int n)
{
	int i = 0;
	while (i < n)
	{
		if (vet[i] % 2 != 0)
			printf("%d\n", vet[i]);
		i++;
	}
}
void pares(int n)
{
	int i = 0;
	while (i < n)
	{
		if (vet[i] % 2 == 0)
			printf("%d\n", vet[i]);
		i++;
	}
	scanf("%d", &i);
}
void menu_GUI()
{
	for (size_t i = 0; i < 2500; i++)
		printf("\n");
	printf("\t\tMENU\n");
	printf("\t1.Primos\n");
	printf("\t2.Pares\n");
	printf("\t3.Impares\n");
	printf("\t0.Sair\n");
	printf("~> ");
}
void menu(int *vet)
{
	int op = 0, n = 0;
	do
	{
		menu_GUI();
		scanf("%d", &op);
		if (op != 0)
		{
			printf("Entre com a quantidade de numeros para exibicao ( Maximo de 100)");
			scanf("%d", &n);
			if (n > LENGHT)
				n = LENGHT;
			n = abs(n);
		}

		switch (op)
		{
		case 1:
			primos(n);
			break;
		case 2:
			pares(n);
			break;
		case 3:
			impares(n);
			break;
		case 0:
			exit(0);
			break;
		}

	} while (1);
}
int main()
{
	srand(time(NULL));

	init(vet);
	menu(vet);
	return 0;
}
