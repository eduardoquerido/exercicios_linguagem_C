//Exerc�cio 7 - Calcular o fatorial de um n�mero fornecido pelo usu�rio
//A fun��o fatorial de um n�mero natural n � o produto de todos os n primeiros n�meros naturais.
//Fat(n)=n!=1.2.3.4

#include<stdio.h>
#include<locale.h>

//Vari�veis

int n, c, j=1;

int main(){
    setlocale(LC_ALL, "portuguese");
    printf("Informe um numero: ");
    scanf("%d", &n);

    for(c=1;c<=n;c++){
    j*=c;
    }

    printf("O fatorial de %d e %d", n, j);

}


