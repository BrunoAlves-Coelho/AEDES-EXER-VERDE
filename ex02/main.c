#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salariominimo, kwgasto, kwvalor, consumo, contaliquida;

    scanf("%f", &salariominimo);

    scanf("%f", &kwgasto);

    kwvalor = (salariominimo / 7.00) / 100.0;

    consumo = kwgasto * kwvalor;

    contaliquida = consumo * 0.90;


    printf("Valor do kW: %.2f\n", kwvalor);
    printf("Valor a pagar: %.2f\n", consumo);
    printf("Valor com desconto: %.2f\n", contaliquida);


}
