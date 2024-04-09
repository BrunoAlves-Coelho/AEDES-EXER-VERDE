#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[201], stringcopia[201];
    int i=0, j=0;
    scanf(" %200[^\n]", string);
    fflush(stdin);

    for(i; string[i]; i++)
    {

        if(string[i]!= ' ')
        {

            stringcopia[j]=string[i];
            j++;
        }
    }
    stringcopia[j]='\0';
    printf("string:%s",stringcopia);


    /*while(string[i] == NULL){

           if(string[i]==' ')

           for(int j=i;string[j];j++){
            string[j]=string[j+1];
            if(string[i]==' ')

           for(int j=i;string[j];j++){
            string[j]=string[j+1];



           }
           i++;

        }
        printf("string:%s", string);*/


    /*for(int i=0; string[i];i++){

        if(string[i]==' '){

           for(int j=i;string[j];j++){
            string[j]=string[j+1];
           }
        }
    }
    for(int i=0; string[i];i++){

        if(string[i]==' '){

           for(int j=i;string[j];j++){
            string[j]=string[j+1];
           }
        }
    }

    printf("string:%s", string);*/
    return 0;
}
