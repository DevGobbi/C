#include <stdio.h>
int main () {

char nomevendedor[50];
int salariofixo;
float totaldevendas;
int i;
printf("Qual o nome do vendedor? \n");
while (nomevendedor[i] != '\0') 
{
scanf ("%c", nomevendedor[i]);
i++;
}
printf ("%s", nomevendedor);
printf("Qual o salario fixo do vendedor? \n");
scanf ("%d", &salariofixo);
printf ("Qual foi o total de vendas feita pelo vendedor? (Em Dinheiro!) \n");
scanf ("%d", totaldevendas);
float salariofinal = salariofixo + (totaldevendas * 0.15);
printf ("Salário do(a) \n %f %c ",nomevendedor,":", salariofinal); 

}
