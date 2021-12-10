
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    

    char *call  = calloc(10000, sizeof(char));
   

    printf("here is calloc %c \n", call[99]);
 

    for (int i = 0; i < 20; i++)
    {
    printf("here is calloc %c \n", call[i]);
    }

    sleep(100);

    //try lazy alloaction

}