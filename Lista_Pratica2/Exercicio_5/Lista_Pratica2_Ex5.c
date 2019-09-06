//Exerc�cio 5 - Fa�a uma fun��o para calcular o fatorial de um n�mero fornecido pelo usu�rio;

#include<stdio.h>
#include<locale.h>
#include<conio.h>


//Declara��o de fun��es

double fat(int n);

//Declara��o de vari�veis

int n;
double f;


int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe um n�mero: ");
    scanf("%d", &n);
    printf("\n");

    f = fat(n);


    printf("O fatorial de %d �: %.0f\n", n, f);

    getch();
    return 0;
}

//C�lculo do fatorial utilizando recursividade, chamando a fun��o fat() dentro da mesma fun��o
double fat(int n){
    double fatorial;

    if(n<=1){
        return (1);
    }
    else{
        fatorial = n * fat(n-1);
        return (fatorial);
    }
}
