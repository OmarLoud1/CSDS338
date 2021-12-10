#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

int main()
{
    char *mall = malloc(100 * sizeof(char));

    char *call  = calloc(100, sizeof(char));
   

    printf("here is calloc %c \n", call[99]);
    printf("here is malloc %c\n", mall[99]); 

    for (int i = 0; i < 20; i++)
    {
    printf("here is calloc %c \n", call[i]);
    printf("here is malloc %c \n", mall[i]); 
    }

    sleep(100);

    //try lazy alloaction

}