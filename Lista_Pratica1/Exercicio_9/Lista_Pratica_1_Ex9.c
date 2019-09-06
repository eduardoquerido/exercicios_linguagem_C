//Exerc�cio 9 - Crie um programa por meio do qual o usu�rio ir� digitar
//a opera��o desejada e dois valores, ao final dever� ser exibido o resultado
//da opera��o.


#include<stdio.h>
#include<locale.h>
#include <stdlib.h>[

//Op��es de opera��es:
//1 - Divis�o
//2 - Resto da divis�o
//3 - Adi��o
//4 - Multiplica��o

//Vari�veis -
int a, b, resultado, n;


//Fun��es

void divisao();
void resto();
void adicao();
void multi();
void fim();


int main(){
    setlocale(LC_ALL, "portuguese");

    while(n>=0){
        printf("\t Menu de Opera��es\n\n");

        printf("[1]:\t Divis�o\n");
        printf("[2]:\t Resto da Divis�o\n");
        printf("[3]:\t Adi��o\n");
        printf("[4]:\t Multiplica��o\n");
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

    printf("O resultado da divis�o �: %d\n\n", resultado);

    system("pause");
}



void resto(){
    printf("Informe o numerador: ");
    scanf("%d", &a);
    printf("Informe o denominador: ");
    scanf("%d", &b);
    printf("\n");

    resultado = a%b;

    printf("O resto da divis�o de %d por %d �: %d\n\n", a, b, resultado);
    system("pause");
}


void adicao(){
    printf("Informe o primeiro n�mero: ");
    scanf("%d", &a);
    printf("Informe o segundo n�mero: ");
    scanf("%d", &b);
    printf("\n");

    resultado = a + b;

    printf("O resultado da adi��o �: %d\n\n", resultado);
    system("pause");
}


void multi(){
    printf("Informe o primeiro n�mero: ");
    scanf("%d", &a);
    printf("Informe o segundo n�mero: ");
    scanf("%d", &b);
    printf("\n");

    resultado = a*b;

    printf("O resultado da multiplica��o �: %d\n\n", resultado);
    system("pause");
}

void fim(){
    exit(0);
}





