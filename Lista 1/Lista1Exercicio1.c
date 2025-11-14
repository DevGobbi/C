#include <stdio.h>
int main () {

int num1;
int num2;
printf ("Insira o primeiro numero: \n");
scanf ("%d", &num1);
printf ("Insira o segundo numero: \n");
scanf ("%d", &num2);
int soma = num1 + num2;
printf ("Soma: %d \n", soma);
int sub = num1 - num2;
printf ("Subtracao %d \n", sub);
int mult = num1 * num2;
printf ("Multiplicacao: %d \n", mult);
float divisao = num1 / num2; 
printf ("Divisao: %.02f \n", divisao);
}
