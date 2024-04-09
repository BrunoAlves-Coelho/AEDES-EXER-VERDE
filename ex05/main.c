#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a, q, n, pg;
    n=5;

    scanf("%d %d", &q, &a);

    pg = a * pow(q,(5-1));

    printf("%d", pg);


    return 0;
}
