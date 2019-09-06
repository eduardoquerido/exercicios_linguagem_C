//Exercício 7 - Faça 3 funções, Ler, Multiplicar e imprimir;

//Função Ler - uma funçãoque receba dois números inteiros e positivos;
//Função Multiplicar - que multiplique os números recebidos na função Ler;
//Função imprimir - que imprima os resultados;

#include<stdio.h>
#include<locale.h>


//Declaração de funções
void ler();
int multiplicar();
int imprimir();


//Declaração de variáveis

int a, b, resultado;


int main(){
    setlocale(LC_ALL, "portuguese");

    ler();
    multiplicar();
    imprimir();

    getch();
}


void ler(){

        do{
            printf("Informe o valor do primeiro número: ");
            scanf("%d", &a);
    }while(a<0);

        do{
            printf("Informe o valor do segundo número: ");
            scanf("%d", &b);
    }while(b<0);
}


int multiplicar(){
    resultado = a*b;
}


int imprimir(){

    printf("O resultado da multiplicação %d x %d é: %d", a, b, resultado);
}
