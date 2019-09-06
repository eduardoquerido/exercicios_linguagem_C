//Exerc�cio 1 - Escreva uma fun��o que recebe um inteiro positivo n e devolve 1 se n � primo ou 0 caso contr�rio


#include<stdio.h>
#include<locale.h>
#include<math.h>

//Declara��o de fun��es
int verificar();

//Declara��o de vari�veis
int aux, n, primo = 1;

int main(){
    setlocale(LC_ALL, "portuguese");

    do{
        printf("Informe um n�mero: ");
        scanf("%d", &n);
    }while(n<=1);

    verificar();
}


int verificar(){

     for (aux=2;aux <= sqrt(n); aux++) //Se um n�mero � d�visivel por um n�mero
                                       //menor que sua raiz quadrado, ent�o ele n�o � primo
             if((n%aux)==0)
                primo=0;

     if(primo)
        printf("O n�mero � primo");
     else
        printf("O n�mero n�o � primo");

}
