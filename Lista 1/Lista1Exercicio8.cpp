#include <stdio.h>

int main () {
	printf ("Qual a cotacao atual do dolar? \n");
	int cotacao;
	scanf ("%d", &cotacao);
	int dolusarios;
	printf ("Qual a quantidade de dolares que você tem? \n");
	scanf ("%d", &dolusarios);
	printf ("Quantos dolares você gostaria de converter pra reais? \n");
	int quantidadeconversao;
	scanf ("%d", &quantidadeconversao);
	int conversao = quantidadeconversao * cotacao;
	printf ("Conversao: ");
	printf ("%d", conversao);
}
