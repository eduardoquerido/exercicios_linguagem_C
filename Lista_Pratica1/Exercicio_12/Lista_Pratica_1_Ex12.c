//Exerc�cio - Dado um n�mero inteiro positivo n, imprimir os n primeiros naturais �mpares.


#include<stdio.h>
#include<locale.h>

//Vari�veis

int n, a, j;


int main() {
    setlocale(LC_ALL, "portuguese");
    printf("Insira o valor de n: ");
    scanf("%d", &n);

    printf("Os primeiros %d �mpares s�o:\n", n);

    for(a=1;j<n;a+=2){
            printf("%d\n", a);
            j++;
        }

}
