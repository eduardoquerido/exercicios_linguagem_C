//Exercício 3 - Faça uma funçãoque receba, por pârametro, um valor inteiro e positivo e retorna o número de divisores desse número

#include<stdio.h>
#include<locale.h>


//Declaração de funções

int divisores();

//Declaração de variáveis
int n, j, count;


int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe um número: ");
    scanf("%d", &n);

    divisores();

    printf("O número %d tem %d divisores.", n, count);
}

int divisores(){
    for(j=1; j<=n; j++){
            if(n%j==0)
                count+=1;
    }

}
