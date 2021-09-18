#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"portuguese");

    float valor1, valor2;
    int operador;

    printf("Olá, esse programa tem o intuito de te ajudar com cálculos matemáticos com dois valores\n\n");
    printf("Digite o primeiro valor:");
    scanf("%f", &valor1);
    printf("\nDigite o segundo valor:");
    scanf("%f", &valor2);

    while(operador < 1 || operador > 4){

    printf("\nEscolha:\n\n1 para somar\n\n2 para subtrair\n\n3 para dividir\n\n4 para multiplicar\n\n");
    scanf("%d", &operador);

    switch(operador){

        case 1: printf ("%.2f + %.2f = %.2f\n", valor1, valor2, (valor1 + valor2));
                break;
        case 2: printf ("%.2f - %.2f = %.2f\n", valor1, valor2, (valor1 - valor2));
                break;
        case 3: printf ("%.2f / %.2f = %.2f\n", valor1, valor2, (valor1 / valor2));
                break;
        case 4: printf("%.2f * %.2f = %.2f\n", valor1, valor2, (valor1 * valor2));
                break;
        default: printf ("\nOpção inválida!\n");
                break;

    }
}























}
