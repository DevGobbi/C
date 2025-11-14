#include <stdio.h>

int main () {
  	int num;
  	int i;
  	int homem;
  	int mulher;
	while (i < 9) {
	printf ("Qual o seu sexo? \n");
  	printf ("[1] - Homem \t [2] - Mulher \n");
	scanf ("%d \n", &num);
	if (num == 1)
	homem++;
	if (num == 2)
	mulher++;
	i++;
}
printf ("Homens:");
printf ("%d \n", homem);
printf ("Mulher: ");
printf ("%d \n", mulher);
}
