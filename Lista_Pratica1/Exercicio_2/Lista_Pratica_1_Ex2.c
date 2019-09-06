#include <stdio.h>
#include <locale.h>


//Exercício 2 - Faça um programa que solicite um número
//(inteiro/positivo) e imprima-o.

//variáveis

int n;

main(){
    setlocale(LC_ALL, "portuguese");
    printf("Informe um valor inteiro positivo: ");
    scanf("%d", &n);
        while(n<=0){
            printf("Informe um valor inteiro positivo: ");
            scanf("%d", &n);
        }
    printf("O valor digitado foi: %d", n);
}
