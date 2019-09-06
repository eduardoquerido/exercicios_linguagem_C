#include <stdio.h>
#include <locale.h>


//Exercício 1 - Dado dois números inteiros positivos,
//calcular a sua soma

int a, b, soma;

int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("Informe o valor de b: ");
    scanf("%d", &b);
    soma = a + b;

    printf("O valor da soma é: %d\n", soma);

}
