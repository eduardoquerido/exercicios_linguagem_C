//Exercício 10 - Dada um sequência de números inteiros não-nulos,
//começando por 1, imprimir seus quadrados


#include<stdio.h>
#include<locale.h>
#include<math.h>


//Declaração das variáveis

int a, c;

//Declaração de funções


int main(){
    setlocale(LC_ALL, "portuguese");

    do{
        printf("Insira o número 1: ");
        scanf("%d", &a);
        if (a!=1){
        printf("O primeiro número deve ser 1\n", a);
        }
        else{
            printf("O quadrado de 1 é = 1\n");
        }

    }while(a!=1);

    do{
        printf("Insira um número: ");
        scanf("%d",&a);

        if(a!=0){
            c = (int)(pow(a, 2) + 0.5);
            printf("O quadrado de %d = %d\n", a, c);
        }
        else{
            break;
        }
}while(a!=0);

}
