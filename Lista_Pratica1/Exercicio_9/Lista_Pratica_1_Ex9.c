//Exercício 9 - Crie um programa por meio do qual o usuário irá digitar
//a operação desejada e dois valores, ao final deverá ser exibido o resultado
//da operação.


#include<stdio.h>
#include<locale.h>
#include <stdlib.h>[

//Opções de operações:
//1 - Divisão
//2 - Resto da divisão
//3 - Adição
//4 - Multiplicação

//Variáveis -
int a, b, resultado, n;


//Funções

void divisao();
void resto();
void adicao();
void multi();
void fim();


int main(){
    setlocale(LC_ALL, "portuguese");

    while(n>=0){
        printf("\t Menu de Operações\n\n");

        printf("[1]:\t Divisão\n");
        printf("[2]:\t Resto da Divisão\n");
        printf("[3]:\t Adição\n");
        printf("[4]:\t Multiplicação\n");
        printf("[5]:\t Sair\n");

        scanf("%d", &n);


    switch(n){
        case 1:
            divisao();
            break;

        case 2:
            resto();
            break;

        case 3:
            adicao();
            break;

        case 4:
            multi();
            break;

        case 5:
            fim();
            break;
    }
    system("cls");
}
}

void divisao(){
    printf("Informe o numerador: ");
    scanf("%d", &a);
    printf("Informe o denominador: ");
    scanf("%d", &b);
    printf("\n");

    resultado = a/b;

    printf("O resultado da divisão é: %d\n\n", resultado);

    system("pause");
}



void resto(){
    printf("Informe o numerador: ");
    scanf("%d", &a);
    printf("Informe o denominador: ");
    scanf("%d", &b);
    printf("\n");

    resultado = a%b;

    printf("O resto da divisão de %d por %d é: %d\n\n", a, b, resultado);
    system("pause");
}


void adicao(){
    printf("Informe o primeiro número: ");
    scanf("%d", &a);
    printf("Informe o segundo número: ");
    scanf("%d", &b);
    printf("\n");

    resultado = a + b;

    printf("O resultado da adição é: %d\n\n", resultado);
    system("pause");
}


void multi(){
    printf("Informe o primeiro número: ");
    scanf("%d", &a);
    printf("Informe o segundo número: ");
    scanf("%d", &b);
    printf("\n");

    resultado = a*b;

    printf("O resultado da multiplicação é: %d\n\n", resultado);
    system("pause");
}

void fim(){
    exit(0);
}





