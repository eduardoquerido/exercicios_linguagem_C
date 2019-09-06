//Exercício 2 - Escreva um função que leia um inteiro não-negativo n e imprimaa soma dos n primeiros números primos

#include <stdio.h>
#include<math.h>
#include<locale.h>


//Declaração de variáveis
    //primeiro número primo é 2, por tanto, i = 2;
    //cont = contador para que seja verificado os n números primos solicitados pelo usuário;
int aux, i = 2, cont = 1, n, primo, total=0;


//Declaração de funções

int verificar();//Verifica se o número é primo


int main() {
    setlocale(LC_ALL, "portuguese");

    do{
        printf("Informe quantos primos serão somados: ");
        scanf("%d",&n);
    }while(n<0);

    verificar();

    printf("A soma dos primeiros %d números primos é: %d\n", n, total);

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
