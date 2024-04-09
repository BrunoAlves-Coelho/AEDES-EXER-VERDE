#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,contdiv3e9, contdiv2, contdiv5;
    float num;
    int numeros;

    contdiv3e9=0;
    contdiv2=0;
    contdiv5=0;
    n=10;

    for (int i=0;i<n;i++){

        scanf("%f", &num);
        numeros = num;

        if((numeros % 3 == 0) && (numeros % 9 == 0)){
            contdiv3e9++;
        }
        if(numeros % 2 == 0){
            contdiv2++;
        }
        if(numeros % 5 == 0){
            contdiv5++;
        }
        if((numeros % 3 != 0 || numeros % 9 != 0) && numeros % 2 != 0 && numeros % 5 != 0) {
          printf("Numero nao divisivel pelos valores\n");

        }

    }


    printf("%i Numeros sao divisiveis por 3 e por 9\n", contdiv3e9);
    printf("%i Numeros sao divisiveis por 2\n", contdiv2);
    printf("%i Numeros sao divisiveis por 5\n", contdiv5);


    return 0;
}
