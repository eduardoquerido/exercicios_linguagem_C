//Exerc�cio 5 - Dado um n�mero inteiro positivo n verificar se � par ou �mpar.
//Apresente uma mensagem informando o n�mero e o resultado.
//OBS: % � utilizado para calcular o resto


#include<stdio.h>
#include<locale.h>

//Vari�veis

int n;

int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe um n�mero: ");
    scanf("%d", &n);

    if (n%2==0){
        printf("O n�mero %d � par!", n);

    }
    else{
        printf("O n�mero %d � �mpar!", n);
    }

}
