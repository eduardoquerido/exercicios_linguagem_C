//Exerc�cio 10 - Dada um sequ�ncia de n�meros inteiros n�o-nulos,
//come�ando por 1, imprimir seus quadrados


#include<stdio.h>
#include<locale.h>
#include<math.h>


//Declara��o das vari�veis

int a, c;

//Declara��o de fun��es


int main(){
    setlocale(LC_ALL, "portuguese");

    do{
        printf("Insira o n�mero 1: ");
        scanf("%d", &a);
        if (a!=1){
        printf("O primeiro n�mero deve ser 1\n", a);
        }
        else{
            printf("O quadrado de 1 � = 1\n");
        }

    }while(a!=1);

    do{
        printf("Insira um n�mero: ");
        scanf("%d",&a);

        if(a!=0){
            c = (int)(pow(a, 2) + 0.5);
            printf("O quadrado de %d = %d\n", a, c);
        }
        else{
            break;
        }
}while(a!=0);

}
