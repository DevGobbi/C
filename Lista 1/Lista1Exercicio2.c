#include <stdio.h>
int main () {

float combustivel_gasto;
float distancia_percorrida;


printf("Qual foi o total de combustivel gasto na viagem? \n");
scanf("%d", &combustivel_gasto);
printf("Qual foi o total de distancia percorrida na viagem? \n");
scanf("%d", &distancia_percorrida);
printf ("O consumo médio de combustivel na viagem foi de: \n");
float combustivel_total = combustivel_gasto / distancia_percorrida;
printf ("%0.2f", combustivel_total);
}
