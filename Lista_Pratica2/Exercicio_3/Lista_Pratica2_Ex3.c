//Exerc�cio 3 - Fa�a uma fun��oque receba, por p�rametro, um valor inteiro e positivo e retorna o n�mero de divisores desse n�mero

#include<stdio.h>
#include<locale.h>


//Declara��o de fun��es

int divisores();

//Declara��o de vari�veis
int n, j, count;


int main(){
    setlocale(LC_ALL, "portuguese");

    printf("Informe um n�mero: ");
    scanf("%d", &n);

    divisores();

    printf("O n�mero %d tem %d divisores.", n, count);
}

int divisores(){
    for(j=1; j<=n; j++){
            if(n%j==0)
                count+=1;
    }

}
