//Exercício 6 - Escreva uma função recursiva que receba, por parâmetro, dois valores X e Z  e retorna
//o valor de x^z

#include<stdio.h>
#include<locale.h>


//Declaração de funções
int potencia();

//Declaração de variáveis
int x, y, z, i=1;


int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe o valor de X: ");
    scanf("%d", &x);
    printf("Informe o valor de Z: ");
    scanf("%d", &z);



    potencia();
    printf("%d elevado a %d é: %d", y, z, x);
}

int potencia(){
    y = x;
    while(i<z){
        x*=y;
        i++;
    }
}
