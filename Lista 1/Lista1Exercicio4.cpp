#include <stdio.h>

int main () {
	char ronaldo[50];
	float salariofixo;
	float totaldevendas;
	printf("Qual o nome do vendedor? \n");
	gets (ronaldo);
	printf("Qual o salario fixo do vendedor? \n");
	scanf ("%f", &salariofixo);
	printf("Qual o total de vendas feitas pelo vendedor? (Em dinheiro!) \n");
	scanf ("%f", &totaldevendas);
	float salariofinal = salariofixo + (totaldevendas * 0.15);
	printf ("O vendedor %s ", ronaldo);
	printf ("teve um salario total de: ");
	printf ("%0.2f", salariofinal); 
}
