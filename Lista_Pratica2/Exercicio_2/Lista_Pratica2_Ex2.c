//Exerc�cio 2 - Escreva um fun��o que leia um inteiro n�o-negativo n e imprimaa soma dos n primeiros n�meros primos

#include <stdio.h>
#include<math.h>
#include<locale.h>


//Declara��o de vari�veis
    //primeiro n�mero primo � 2, por tanto, i = 2;
    //cont = contador para que seja verificado os n n�meros primos solicitados pelo usu�rio;
int aux, i = 2, cont = 1, n, primo, total=0;


//Declara��o de fun��es

int verificar();//Verifica se o n�mero � primo


int main() {
    setlocale(LC_ALL, "portuguese");

    do{
        printf("Informe quantos primos ser�o somados: ");
        scanf("%d",&n);
    }while(n<0);

    verificar();

    printf("A soma dos primeiros %d n�meros primos �: %d\n", n, total);

}

int verificar(){

    while (cont <= n) {
            primo=1;
        for (aux = 2;aux <= sqrt(i); aux++)
            if (i % aux == 0)
            primo = 0;

        if (primo) {
            printf("%d\n", i);
            cont++;
            total+=i;
            }
        i++;
    }
}
