#include <stdio.h>

int main () {
	printf ("Qual o custo de fabrica do carro?");
	int custofabrica;
	scanf ("%d", &custofabrica);
	float custoconsumidor = custofabrica + (custofabrica * 0.28) + (custofabrica * 0.45);
	printf ("O valor total do carro para o consumidor eh de: ");
	printf ("%0.0f", custoconsumidor);
}
