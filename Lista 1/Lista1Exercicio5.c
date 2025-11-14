#include <stdio.h>

int main () {
	printf("Qual o nome do aluno? \n");
	char nomealuno[50];
	gets (nomealuno);
	float nota1;
	printf("Qual a primeira nota? \n");
	scanf ("%f", &nota1);
	float nota2;
	printf("Qual a segunda nota? \n");
	scanf ("%f", &nota2);
	float nota3;
	printf("Qual a terceira nota? \n");
	scanf ("%f", &nota3);
	float media = (nota1 + nota2 + nota3) / 3;
	printf ("Nome do aluno: ");
	puts (nomealuno);
	printf ("Media: ");
	printf ("%0.2f", media);
}
