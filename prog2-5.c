#include <stdio.h>
#include <string.h>
//source : https://stackoverflow.com/questions/52786620/print-out-the-third-word-in-a-string-c


#define SIZE  100
#define WS  " \t\n\r\v\f"  /* white space characters */

int main(void) {
    char input[SIZE];
    char *p;

    while (1) {
        printf("Enter a sentence:");
        if (fgets(input, sizeof input, stdin) == NULL)
            break;
        p = input;
        p += strspn(p, WS);     /* skip initial spaces */
        p += strcspn(p, WS);    /* skip first word */
        p += strspn(p, WS);     /* skip spaces */
        p += strcspn(p, WS);    /* skip second word */
        p += strspn(p, WS);     /* skip spaces */

        printf("%s", p);
        
    
    return 0;
}
}