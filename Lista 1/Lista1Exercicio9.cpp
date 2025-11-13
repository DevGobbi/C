#include <stdio.h>

int main () {
	printf ("Bem vindo a loja Mamao com Acucar! \n");
	printf ("Qual o valor da compra? \n");
	int valorcompra;
	scanf ("%d", &valorcompra);
    float prestacoes = valorcompra / 5;
    printf ("A compra ficaria 5 prestacoes de ");
    printf ("%0.0f", prestacoes);
    printf ("reais!");
}
