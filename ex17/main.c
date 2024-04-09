#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[201];
    int fimstring,meiastring,cont=0;

    scanf("%[^\n]", string);
    fimstring=strlen(string)-2;
    meiastring=fimstring/2;

    for(int i=0; i<meiastring; i++ )
    {   if(string[i] == string[fimstring])
        {
            cont++;
        }
        fimstring--;
    }

    if(cont == meiastring)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
    }
