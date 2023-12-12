#include <stdio.h>
#include <conio.h>
#include <string.h>

const int tamanho = 100;

typedef struct
{
	char nome[100];
	char sexo;
	int idade;
	float salario;
} funcionarios;

void main()
{
	funcionarios vet[tamanho];
	int k;
	char mudar;
	char adicionar;
	int quantidade = 1;
	for (k = 0; k < quantidade; k++)
	{
		printf("Informe o NOME do funcionario %d: \n", k);
		gets(vet[k].nome);
		fflush(stdin);
		printf("Informe o SEXO do funcionario %d: \n", k);
		gets(&vet[k].sexo);
		fflush(stdin);
		printf("Informe a IDADE do funcionario %d: \n", k);
		scanf("%d", &vet[k].idade);
		fflush(stdin);
		printf("Informe o SALARIO do funcionario %d: \n", k);
		scanf("%f", &vet[k].salario);
		fflush(stdin);
		printf("Deseja mudar alguma informacao? (S)SIM (N)NAO: \n");
		scanf("%c", &mudar);
		fflush(stdin);
		if (mudar == 'S' || mudar == 's')
		{
			char campo;
			int invalido;
			char mudarOutro;
			do
			{
				printf("Qual campo deseja mudar? (A)IDADE, (B)SEXO, (C)NOME, (D)SALARIO (E)SAIR: \n");
				scanf("%c", &campo);
				fflush(stdin);
				switch (campo)
				{
				case 'A':
				case 'a':
					printf("Informe a IDADE do funcionario %d: \n", k);
					scanf("%d", &vet[k].idade);
					fflush(stdin);
					invalido = 0;
					break;
				case 'B':
				case 'b':
					printf("Informe o SEXO do funcionario %d: \n", k);
					gets(vet[k].sexo);
					fflush(stdin);
					invalido = 0;
					break;
				case 'C':
				case 'c':
					printf("Informe o NOME do funcionario %d: \n", k);
					gets(vet[k].nome);
					fflush(stdin);
					invalido = 0;
					break;
				case 'D':
				case 'd':
					printf("Informe o SALARIO do funcionario %d: \n", k);
					scanf("%f", &vet[k].salario);
					fflush(stdin);
					invalido = 0;
					break;
				case 'E':
				case 'e':
					invalido = 0;
					break;
				default:
					printf("Caractere invalido, digite novamente, por favor.\n");
					fflush(stdin);
					printf("Qual campo deseja mudar? (A)IDADE, (B)SEXO, (C)NOME, (D)SALARIO (E)SAIR: \n");
					scanf("%c", &campo);
					fflush(stdin);
					invalido = 1;
				}
				if (campo != 'e' && campo != 'E')
				{
					printf("Deseja mudar outro campo? (N)NAO (S)SIM: \n");
					scanf("%c", &mudarOutro);
					fflush(stdin);
					if (mudarOutro == 's' || mudarOutro == 'S')
					{
						invalido = 1;
					}
				}

			} while (invalido == 1);
		}
		printf("Deseja adicionar outro funcionario? (S)SIM (N)(NAO): \n");
		scanf("%c", &adicionar);
		fflush(stdin);
		if (adicionar == 's' || adicionar == 'S')
		{
			quantidade++;
		}
		system("cls");
	}

	printf("\n\nFuncionarios:\n\n");

	for (k = 0; k < quantidade; k++)
	{
		printf("\nNOME: %s \n", vet[k].nome);
		printf("SEXO: %c\n", vet[k].sexo);
		printf("IDADE: %d\n", vet[k].idade);
		printf("SALARIO: R$%.2f\n", vet[k].salario);
		printf("\n\n");
	}
	getch();
}
