#include <stdio.h>
#include <stdlib.h>

int main()
{

    float compra, venda, compraTotal, vendaTotal,lucroTotal;
    int contMenor10, cont10a20, contMaior20;
    scanf("%f %f", &compra, &venda);
    compraTotal = compra;
    vendaTotal = venda;
    cont10a20=0;
    contMenor10=0;
    contMaior20=0;

       /*if(((venda-compra)/compra)*100.00 < 10){
                contMenor10++;
        }
        else if(((venda-compra)/compra)*100.00 >= 10 && ((venda-compra)/compra)*100.00 <= 20){
                cont10a20++;
        }
        else if(((venda-compra)/compra)*100.00 > 20){
                contMaior20++;
        }*/

    while(compra>0){




        if(((venda-compra)/compra)*100.00 < 10){
                contMenor10++;
        }
        else if(((venda-compra)/compra)*100.00 >= 10 && ((venda-compra)/compra)*100.00 <= 20){
                cont10a20++;
        }
        else if(((venda-compra)/compra)*100.00 > 20){
                contMaior20++;
        }

        scanf("%f %f", &compra, &venda);
        compraTotal+=compra;
        vendaTotal+=venda;
    }
    lucroTotal=vendaTotal-compraTotal;

    printf("%d\n", contMenor10);
    printf("%d\n", cont10a20);
    printf("%d\n", contMaior20);
    printf("%.2f\n", compraTotal);
    printf("%.2f\n", vendaTotal);
    printf("%.2f\n", lucroTotal);

    return 0;
}
