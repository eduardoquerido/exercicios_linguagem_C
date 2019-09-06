//Exercício 4 - Escreva uma função que recebe 3 valores inteiros e positivos
//X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados
//de um triângulo e, neste caso, retornar qual o tipo de triângulo formado.


#include<stdio.h>
#include<locale.h>


//Declaração de função

int triangulo();
int tipo();

//Declaração de variáveis

int a, b, c, tri;


int main(){
    setlocale(LC_ALL, "portuguese");
    //1º lado do triângulo
    printf("1º lado: ");
    scanf("%d", &a);
    //2º lado do triângulo
    printf("2º lado: ");
    scanf("%d", &b);
    //3º lado do triângulo
    printf("3º lado: ");
    scanf("%d", &c);
    printf("\n");

    triangulo();

    if(tri==1){
        tipo();
    }
}



int triangulo(){
    if(a+b>c && a+c>b && c+b>a){
        printf("É possível formar um triângulo.\n\n");
        tri = 1;
    }
    else{
        printf("Não é possível formar um triângulo.\n\n");
        tri = 0;
    }

}


int tipo(){

    if (a==c && a!=b)
            printf("O triângulo é isósceles!");

    else if(a==b && a!=c)
            printf("O triângulo é isósceles!");

    else if(b==c && b!=a)
            printf("O triângulo é isósceles!");

    else if(a==c && a==b)
        printf("O triângulo é equilátero!");

    else
        printf("O triângulo é escaleno!");
}



