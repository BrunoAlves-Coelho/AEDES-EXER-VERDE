#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cont1=0,cont2=0,cont3=0,cont4=0, contnulo=0, contbranco=0;

    scanf("%d", &n);

    while(n != 0 && n>0){

        if(n == 1){
          cont1++;

        }
        if(n == 2){
          cont2++;
        }
        if(n == 3){
          cont3++;
        }
        if(n == 4){
          cont4++;
        }
        if(n == 5){
          contnulo++;
        }
        if(n == 6){
          contbranco++;
        }
        scanf("%d", &n);

    }

    printf("%d\n", cont1);
    printf("%d\n", cont2);
    printf("%d\n", cont3);
    printf("%d\n", cont4);
    printf("%d\n", contnulo);
    printf("%d\n", contbranco);

    return 0;
}
