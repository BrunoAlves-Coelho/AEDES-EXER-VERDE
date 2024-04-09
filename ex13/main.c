#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, salarioT, filhosT=0,maiorsalario=0, mediasal=0,percentsal_100, cont, contsal_100;
    int filhos,mediafilhos;
    scanf("%f %d", &salario, &filhos);
    maiorsalario = salario;
    salarioT= salario;
    filhosT=filhos;
    cont=1;
    contsal_100=0;

    while(salario>=0)
    {
            if(salario>maiorsalario)
            {
                maiorsalario=salario;
            }

            if(salario<=100.00 && salario >=0 )
            {
                contsal_100++;
            }
            scanf("%f %d", &salario, &filhos);
            if(salario>=0){
            salarioT= salarioT + salario;
            filhosT= filhosT+filhos;
            cont++ ;
        }
    }
    mediasal = salarioT/cont;
    mediafilhos = filhosT/cont;
    percentsal_100 = (contsal_100/cont)*100.00;

    //printf("%d %d %f %f, %f\n", cont, contsal_100,salarioT , filhosT , percentsal_100);
    printf("%.2f\n",mediasal);
    printf("%d\n",mediafilhos);
    printf("%.2f\n",maiorsalario);
    printf("%.2f\n",percentsal_100);

    return 0;
}
