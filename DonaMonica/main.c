#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,a,b,c,filhomaisvelho;

    scanf("%d", &m);
    scanf("%d", &a);
    scanf("%d", &b);

    c = m-a-b;

    if(a>b && a>c){
        filhomaisvelho=a;

    }
    if(b>a && b>c){
        filhomaisvelho=b;
    }
    if(c>a && c>b){
        filhomaisvelho=c;
    }

    printf("%d",filhomaisvelho);
    return 0;
}
