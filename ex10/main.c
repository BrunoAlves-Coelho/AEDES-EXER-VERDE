#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, numeros,positivos, negativos,zeros;
    positivos=0;
    negativos=0;
    zeros=0;

    scanf("%i", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%i", &numeros);
        if(numeros > 0)
        {
            positivos++;
        }
        if(numeros<0)
        {
            negativos++;

        }
        if(numeros==0)
        {
            zeros++;
        }
    }

    printf("%i POSITIVOS\n", positivos);
    printf("%i NEGATIVOS\n", negativos);
    printf("%i ZEROS\n", zeros);

    return 0;
}

