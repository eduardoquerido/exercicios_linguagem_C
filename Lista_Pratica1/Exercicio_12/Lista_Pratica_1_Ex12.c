//Exercício - Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.


#include<stdio.h>
#include<locale.h>

//Variáveis

int n, a, j;


int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Insira o valor de n: ");
    scanf("%d", &n);

    printf("Os primeiros %d ímpares são:\n", n);

    for(a=1;j<n;a+=2){
            printf("%d\n", a);
            j++;
        }

}
