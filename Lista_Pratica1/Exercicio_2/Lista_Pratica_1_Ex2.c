#include <stdio.h>
#include <locale.h>


//Exerc�cio 2 - Fa�a um programa que solicite um n�mero
//(inteiro/positivo) e imprima-o.

//vari�veis

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
