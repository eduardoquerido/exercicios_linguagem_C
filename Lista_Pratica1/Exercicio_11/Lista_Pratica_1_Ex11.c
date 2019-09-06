//Exercício 11 - Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais;


#include<stdio.h>
#include<locale.h>
#include<math.h>

//Variáveis

int n, a, b=0;


int main() {
    setlocale(LC_ALL, "portuguese");

    printf("Insira o valor de n: ");
    scanf("%d", &n);

    for(a=1; a<=n; a++){
        b+=a;
    }

    printf("O valor da soma dos %d primeiros números é: %d\n", n, b);



}
