//Exerc�cio 13 - Dados um inteiro x e um inteiro n�o-negativo n, calcular x elevado a n;

#include<stdio.h>
#include<locale.h>

//Vari�veis

int x, n, resultado;

int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe um n�mero inteiro: ");
    scanf("%d", &x);
    printf("Informe um n�mero inteiro n�o-negativo: ");
    scanf("%d", &n);


    resultado = (int)(pow(x, n) + 0.5);

    printf("O valor de %d elevado a %d �: %d\n", x, n, resultado);
}
