//Exercício 1 - Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é primo ou 0 caso contrário


#include<stdio.h>
#include<locale.h>
#include<math.h>

//Declaração de funções
int verificar();

//Declaração de variáveis
int aux, n, primo = 1;

int main(){
    setlocale(LC_ALL, "portuguese");

    do{
        printf("Informe um número: ");
        scanf("%d", &n);
    }while(n<=1);

    verificar();
}


int verificar(){

     for (aux=2;aux <= sqrt(n); aux++) //Se um número é dívisivel por um número
                                       //menor que sua raiz quadrado, então ele não é primo
             if((n%aux)==0)
                primo=0;

     if(primo)
        printf("O número é primo");
     else
        printf("O número não é primo");

}
