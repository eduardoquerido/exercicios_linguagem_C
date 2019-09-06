//Exercício 5 - Dado um número inteiro positivo n verificar se é par ou ímpar.
//Apresente uma mensagem informando o número e o resultado.
//OBS: % é utilizado para calcular o resto


#include<stdio.h>
#include<locale.h>

//Variáveis

int n;

int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe um número: ");
    scanf("%d", &n);

    if (n%2==0){
        printf("O número %d é par!", n);

    }
    else{
        printf("O número %d é ímpar!", n);
    }

}
