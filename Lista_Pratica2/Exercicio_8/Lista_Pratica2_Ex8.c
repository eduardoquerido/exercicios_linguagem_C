//Exerc�cio 8 - Escreva uma fun��o que recebe um inteiro positivo n e devolve

#include<stdio.h>
#include<locale.h>


//Declara��o de fun��es
int verificar();

//Declara��o de vari�veis
int n;


int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe um n�mero: ");
    scanf("%d", &n);

    verificar();

    getch();
}

int verificar(){

    if(n%2==0){
        printf("1");
    }else{
    printf("0");
    }

}
