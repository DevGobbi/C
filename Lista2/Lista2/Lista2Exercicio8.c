#include <stdio.h>

int main () {
	int custa;
	int venda;
	int i;
	while (i < 9) {
		printf ("Qual o valor de custo? \n");
		scanf ("%d", &custa);
		printf ("Qual o valor de venda? \n");
		scanf ("%d", &venda);
		if (custa = venda)
		printf ("Empate! \n");
		if (custa > venda)
		printf ("Prejuizo! \n");
		if (custa < venda)
		printf ("Lucro! \n");
		i++;
	}
}
