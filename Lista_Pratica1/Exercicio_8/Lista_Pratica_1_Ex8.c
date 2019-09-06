//Exercício 8 - Calcular a tabuada de um número fornecido pelo usuário
//multiplicado de 0 a 12. O resultado deverá ser apresentado da seguinte forma:
//Número x 0 = Resultado1
//Número x 1 = Resultado2
//e assim por diante

#include<stdio.h>
#include<locale.h>

//Variáveis

int n, c, tab;

main(){
    setlocale(LC_ALL, "portuguese");
    printf("Informe um número: ");
    scanf("%d", &n);

    for (c=0;c<=10;c++){
        tab = c * n;
        printf("%d x %d = %d\n", n, c, tab);
    }

}
