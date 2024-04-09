#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float e, fracao,fatorial;

    e=1;
    fatorial=1;


    scanf("%d", &n);


    for (int i=1; i<n; i++){

        fatorial= fatorial * i;
        fracao = 1 / fatorial;
        e = e + fracao;


    }

    printf("%0.2f", e);
    return 0;
}
