//Exerc�cio 6 - Escreva uma fun��o recursiva que receba, por par�metro, dois valores X e Z  e retorna
//o valor de x^z

#include<stdio.h>
#include<locale.h>


//Declara��o de fun��es
int potencia();

//Declara��o de vari�veis
int x, y, z, i=1;


int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe o valor de X: ");
    scanf("%d", &x);
    printf("Informe o valor de Z: ");
    scanf("%d", &z);



    potencia();
    printf("%d elevado a %d �: %d", y, z, x);
}

int potencia(){
    y = x;
    while(i<z){
        x*=y;
        i++;
    }
}
