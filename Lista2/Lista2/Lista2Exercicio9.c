#include <stdio.h>

int main () {
	int num;
	int i;
	while (i < 9) {
	printf ("Digite um numero! \n");
	scanf ("%d", &num);
	if (num > 80) 
	printf ("Seu numero e maior que 80! \n");
	if (num < 25)
	printf ("Seu numero e menor que 25! \n");
 	if (num == 40)
	printf ("Seu numero e igual a 40! \n"); 
	i++;
	}
}
