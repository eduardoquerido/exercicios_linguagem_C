#include <stdio.h>
#include <locale.h>
#include <math.h>

//Exerc�cio 3 - Dado um n�mero positivo n, imprima seu quadrado

//Vari�veis

int n, qd;

main(){
    setlocale(LC_ALL, "portuguese");
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    //qd = n * n;

    qd = (int)(pow(n, 2) + 0.5);
    //usando pow(), a potencia��o est� dando errado quando n=5;

    printf("O quadrado de %d � igual a: %d\n", n, qd);

}
