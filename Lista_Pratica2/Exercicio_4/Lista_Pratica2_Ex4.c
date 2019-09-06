//Exerc�cio 4 - Escreva uma fun��o que recebe 3 valores inteiros e positivos
//X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados
//de um tri�ngulo e, neste caso, retornar qual o tipo de tri�ngulo formado.


#include<stdio.h>
#include<locale.h>


//Declara��o de fun��o

int triangulo();
int tipo();

//Declara��o de vari�veis

int a, b, c, tri;


int main(){
    setlocale(LC_ALL, "portuguese");
    //1� lado do tri�ngulo
    printf("1� lado: ");
    scanf("%d", &a);
    //2� lado do tri�ngulo
    printf("2� lado: ");
    scanf("%d", &b);
    //3� lado do tri�ngulo
    printf("3� lado: ");
    scanf("%d", &c);
    printf("\n");

    triangulo();

    if(tri==1){
        tipo();
    }
}



int triangulo(){
    if(a+b>c && a+c>b && c+b>a){
        printf("� poss�vel formar um tri�ngulo.\n\n");
        tri = 1;
    }
    else{
        printf("N�o � poss�vel formar um tri�ngulo.\n\n");
        tri = 0;
    }

}


int tipo(){

    if (a==c && a!=b)
            printf("O tri�ngulo � is�sceles!");

    else if(a==b && a!=c)
            printf("O tri�ngulo � is�sceles!");

    else if(b==c && b!=a)
            printf("O tri�ngulo � is�sceles!");

    else if(a==c && a==b)
        printf("O tri�ngulo � equil�tero!");

    else
        printf("O tri�ngulo � escaleno!");
}



