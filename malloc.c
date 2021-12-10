
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    char *mall = malloc(10000 * sizeof(char));
 
    printf("here is malloc %c\n", mall[99]); 

    for (int i = 0; i < 20; i++)
    {
    printf("here is malloc %c \n", mall[i]); 
    }

    sleep(100);

    //try lazy alloaction

}