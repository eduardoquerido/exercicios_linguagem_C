//Exerc�cio 8 - Calcular a tabuada de um n�mero fornecido pelo usu�rio
//multiplicado de 0 a 12. O resultado dever� ser apresentado da seguinte forma:
//N�mero x 0 = Resultado1
//N�mero x 1 = Resultado2
//e assim por diante

#include<stdio.h>
#include<locale.h>

//Vari�veis

int n, c, tab;

main(){
    setlocale(LC_ALL, "portuguese");
    printf("Informe um n�mero: ");
    scanf("%d", &n);

    for (c=0;c<=10;c++){
        tab = c * n;
        printf("%d x %d = %d\n", n, c, tab);
    }

}
