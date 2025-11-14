#include <stdio.h>

int main () {
	printf ("Qual o valor da primeira variavel? \n");
	int var1;
	scanf("%d", &var1);
	printf ("Qual o valor da segunda variavel? \n");
	int var2;
	scanf("%d", &var2);
	int var1kayque = var2;
	int var2kayque = var1;
	printf ("Variavel 1:");
	printf ("%d \n", var1kayque);
	printf ("Variavel 2:");
	printf ("%d", var2kayque);
}
