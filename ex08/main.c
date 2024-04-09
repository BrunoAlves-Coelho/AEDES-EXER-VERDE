#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diaria, diariap, valorT80, valorT50, diferenca;
    scanf("%f", &diaria);

    diariap = diaria - (diaria * 0.25);

    valorT80= (80.0*0.80) * diariap;
    valorT50= (80.0*0.50) * diaria;
    diferenca = valorT80 - valorT50;


    printf("Valor promocional: %.2f\n", diariap);
    printf("Promocional com 80%% ocupado: %.2f\n", valorT80);
    printf("Normal com 50%% ocupado: %0.2f\n", valorT50);
    printf("Diferenca entre os valores: %0.2f\n", diferenca);

    return 0;
}
