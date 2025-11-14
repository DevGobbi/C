#include <stdio.h>

int main () {
	printf ("Qual o nome do aluno? \n");
	char nomealuno[50];
	gets (nomealuno);
	printf ("Qual a primeira nota? \n");
	int nota1;
	scanf ("%d", &nota1);
	printf ("Qual a segunda nota? \n");
	int nota2;
	scanf ("%d", &nota2);
	printf ("Qual a terceira nota? \n");
	int nota3;
	scanf ("%d", &nota3);
	float media = (nota1 + nota2 + nota3) / 3;
	if (media > 6){
		
	printf ("O aluno ");
	puts (nomealuno);
	printf ("esta aprovado!"); 
}
	if (media < 4) 
	{
	printf ("O aluno ");
	puts (nomealuno);
	printf ("esta reprovado..");
	}
	if (media > 4 && media < 6) {
		printf ("O aluno ");
	puts (nomealuno);
	printf ("esta reprovado mas tem direito a fazer o IFA");
	}
}
