#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase[201];
    char caracter1, caracter2;
    int i=0;
    scanf(" %c", &caracter1);
    fflush(stdin);
    scanf(" %c", &caracter2);
    fflush(stdin);
    scanf(" %200[^\n]",frase);
    fflush(stdin);

    //printf("%s", string);

    for(i;frase[i] != NULL;i++){

        if(frase[i]==caracter1){
            frase[i]=caracter2;

        }
    }

    printf("string:%s", frase);



    return 0;
}
