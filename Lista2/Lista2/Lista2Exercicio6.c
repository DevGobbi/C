#include <stdio.h>
int main () {
	int i;
	int idade;
	while (i < 10) {
		printf("Qual a sua idade? \n");
		scanf ("%d", &idade);
		if (idade > 17)
		printf ("Voce e maior de idade! \n");
		else
		printf ("Voce e menor de idade! \n");
		i++;
	}
}
