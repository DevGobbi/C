#include <stdio.h>

int main () {
	int num1;
	int num2;
	printf ("Digite o primeiro numero! \n");
	scanf ("%d", &num1);
	printf ("Digite o segundo numero! \n");
	scanf ("%d", &num2);
	if (num1 == num2)
	printf("Os numeros sao iguais! \n");
	if (num1 != num2) {
		printf ("Os numeros sao diferentes! \n");
		if (num1 > num2)
		printf ("O primeiro numero e maior!");
		if (num2 > num1)
		printf("O segundo numero e maior!");
	}
}
