//Exercício 4 - Faça um programa que solicite o ano em que uma pessoa nasceu
//e retorne sua idade.

#include <stdio.h>
#include <locale.h>


//Variáveis.
    //Constante:
    int ano_atual = 2019;
    //Variável:
    int ano_nasc, idade;


main(){
    setlocale(LC_ALL, "portuguese");
    printf("Informe o ano de seu nascimento: ");
    scanf("%d", &ano_nasc);

    idade = ano_atual - ano_nasc;

    printf("Sua idade: %d", idade);

}
