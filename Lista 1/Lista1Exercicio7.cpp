#include <stdio.h>

int main () {
printf ("Insira a temperatura em celsius! \n");
int celsius;
scanf ("%d", &celsius);
printf ("A temperatura em Fahreinheit eh: ");
float fahrenheit = (9 * celsius + 160) / 5;
printf ("%.02f", fahrenheit);
}
