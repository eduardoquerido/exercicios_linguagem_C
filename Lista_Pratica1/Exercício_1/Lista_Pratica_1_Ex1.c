#include <stdio.h>
#include <locale.h>


//Exerc�cio 1 - Dado dois n�meros inteiros positivos,
//calcular a sua soma

int a, b, soma;

int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("Informe o valor de b: ");
    scanf("%d", &b);
    soma = a + b;

    printf("O valor da soma �: %d\n", soma);

}
