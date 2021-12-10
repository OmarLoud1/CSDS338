#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char *a;
    a = malloc(1000000000*sizeof(char));
    a = "hello";
    sleep(1000);

    /*when top is run after this program runs we find that prog4 only uses 272KB of memory
      since the size of char is 8 bits, 8 * one million is around 8 MB not 272KB meaning this
      malloc has lazy allocation. Screenshots of top attached. 
    */


}