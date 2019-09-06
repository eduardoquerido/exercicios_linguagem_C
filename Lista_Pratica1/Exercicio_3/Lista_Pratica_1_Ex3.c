#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exercício 3 - Dado um número positivo n, imprima seu quadrado

//Variáveis

int n, qd;

main(){
    setlocale(LC_ALL, "portuguese");
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    //qd = n * n;

    qd = (int)(pow(n, 2) + 0.5);
    //usando pow(), a potenciação está dando errado quando n=5;

    printf("O quadrado de %d é igual a: %d\n", n, qd);

}
