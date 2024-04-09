#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c;

    a=1;
    b=1;

    scanf("%d", &n);
    printf("%d ", a);
    printf("%d ", b);

    for(int i=2;i<n;i++){
        c= a +b;
        printf("%d ",c);

        a=b;
        b=c;




    }





    return 0;
}
