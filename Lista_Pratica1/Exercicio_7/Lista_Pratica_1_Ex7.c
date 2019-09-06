//Exercício 7 - Calcular o fatorial de um número fornecido pelo usuário
//A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.
//Fat(n)=n!=1.2.3.4

#include<stdio.h>
#include<locale.h>

//Variáveis

int n, c, j=1;

int main(){
    setlocale(LC_ALL, "portuguese");
    printf("Informe um numero: ");
    scanf("%d", &n);

    for(c=1;c<=n;c++){
    j*=c;
    }

    printf("O fatorial de %d e %d", n, j);

}


