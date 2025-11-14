#include <stdio.h>
int main() {
	int i;
	int numero;
	int quantidade;
	while (i < 79) {
		printf("Insira um numero! \n");
		scanf ("%d", &numero);
		if (numero >= 10 && numero <= 150)
		quantidade++;
		i++;
	}
	printf ("Numeros contidos entre 10 e 150: ");
	printf ("%d", quantidade);
}
