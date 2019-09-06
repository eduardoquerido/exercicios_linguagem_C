//Exercício 5 - Faça uma função para calcular o fatorial de um número fornecido pelo usuário;

#include<stdio.h>
#include<locale.h>
#include<conio.h>


//Declaração de funções

double fat(int n);

//Declaração de variáveis

int n;
double f;


int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe um número: ");
    scanf("%d", &n);
    printf("\n");

    f = fat(n);


    printf("O fatorial de %d é: %.0f\n", n, f);

    getch();
    return 0;
}

//Cálculo do fatorial utilizando recursividade, chamando a função fat() dentro da mesma função
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
