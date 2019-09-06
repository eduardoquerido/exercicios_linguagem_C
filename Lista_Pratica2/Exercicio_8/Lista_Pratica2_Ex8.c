//Exercício 8 - Escreva uma função que recebe um inteiro positivo n e devolve

#include<stdio.h>
#include<locale.h>


//Declaração de funções
int verificar();

//Declaração de variáveis
int n;


int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe um número: ");
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
