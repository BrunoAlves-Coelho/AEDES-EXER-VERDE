#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char string[201];
    int i=0;
    scanf("%200[^\n]", &string);
    //fflush(stdin);


    for(int i=0; i<strlen(string); i++)
    {
        if(string[i] != ' ')
        {
            printf("%c", string[i]);
        }


        if(string[i]== ' ')
        {
            printf("\n");


        }

    }

    return 0;
}
