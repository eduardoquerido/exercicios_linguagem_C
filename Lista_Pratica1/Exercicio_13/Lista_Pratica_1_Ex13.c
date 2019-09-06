//Exercício 13 - Dados um inteiro x e um inteiro não-negativo n, calcular x elevado a n;

#include<stdio.h>
#include<locale.h>

//Variáveis

int x, n, resultado;

int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe um número inteiro: ");
    scanf("%d", &x);
    printf("Informe um número inteiro não-negativo: ");
    scanf("%d", &n);


    resultado = (int)(pow(x, n) + 0.5);

    printf("O valor de %d elevado a %d é: %d\n", x, n, resultado);
}
