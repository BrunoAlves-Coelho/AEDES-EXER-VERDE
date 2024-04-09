#include <stdio.h>
#include <stdlib.h>

int main()
{
    int velocidadepermitida, velocidademotorista;
    scanf("%d %d", &velocidadepermitida, &velocidademotorista);

    if(velocidademotorista <= velocidadepermitida)
    {
        printf("Motorista respeitou a lei");
    }
    else
    {

        if((velocidademotorista-velocidadepermitida)<=10)
        {
          printf("Multa de 50 reais");

        }
        else if((velocidademotorista-velocidadepermitida)>10 &&(velocidademotorista-velocidadepermitida)<=30)
        {
            printf("Multa de 100 reais");
        }
        else if((velocidademotorista-velocidadepermitida)>30){
                printf("Multa de 200 reais");

        }

    }


    return 0;
}
