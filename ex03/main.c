#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


    float base, altura, perimetro, area, diagonal;

    scanf("%f",&base);
    scanf("%f",&altura);

    area = base * altura;
    perimetro = 2.0 * base + 2.0 * altura;
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));


    printf("Perimetro: %0.2f\n", perimetro);
    printf("Area: %0.2f\n", area);
    printf("Diagonal: %0.2f\n", diagonal);




return 0;

}
