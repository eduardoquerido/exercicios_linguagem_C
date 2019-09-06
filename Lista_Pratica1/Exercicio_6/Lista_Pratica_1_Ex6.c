//Exercício 6 - Dados três número, imprimi-los em ordem crescente.


#include<stdio.h>
#include<locale.h>

//Variáveis

int a, b, c;

int main(){
    setlocale(LC_ALL, "portuguese");
    printf("Informe tres numero: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a>b && a>c){
            if (b>c){
                printf("A ordem sera:\n%d\n%d\n%d", c, b, a);
            }
            else{
                printf("A ordem sera:\n%d\n%d\n%d", b, c, a);
            }
        }

    else if (b>a && b>c){
            if (a>c){
                printf("A ordem sera:\n%d\n%d\n%d", c, a, b);
            }
            else{
                printf("A ordem sera:\n%d\n%d\n%d", a, c, b);
            }
    }
    else{
            if (a>b){
                printf("A ordem sera:\n%d\n%d\n%d", b, a, c);
            }
            else{
                printf("A ordem sera:\n%d\n%d\n%d", a, b, c);
            }
        }

    }



