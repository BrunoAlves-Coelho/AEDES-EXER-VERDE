#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um programa que leia 2 valores e imprima a soma desses valores.
    //printf("Hello world!\n");
    /*int a, b, soma;
    scanf("%i", &a);
    scanf("%i",&b);

    soma=a+b;

    printf("%i", soma);
    return 0;*/

    int numero, centena, dezena, unidade;
    scanf("%i",&numero);

    centena= numero / 100;
    dezena = (numero % 100) / 10;
    unidade = (numero % 100) % 10;

    printf("%i%i%i", unidade, dezena, centena);



    return 0;

}
