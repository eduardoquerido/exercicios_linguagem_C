//Exerc�cio 7 - Fa�a 3 fun��es, Ler, Multiplicar e imprimir;

//Fun��o Ler - uma fun��oque receba dois n�meros inteiros e positivos;
//Fun��o Multiplicar - que multiplique os n�meros recebidos na fun��o Ler;
//Fun��o imprimir - que imprima os resultados;

#include<stdio.h>
#include<locale.h>


//Declara��o de fun��es
void ler();
int multiplicar();
int imprimir();


//Declara��o de vari�veis

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
            printf("Informe o valor do primeiro n�mero: ");
            scanf("%d", &a);
    }while(a<0);

        do{
            printf("Informe o valor do segundo n�mero: ");
            scanf("%d", &b);
    }while(b<0);
}


int multiplicar(){
    resultado = a*b;
}


int imprimir(){

    printf("O resultado da multiplica��o %d x %d �: %d", a, b, resultado);
}
