#include <stdio.h>
#include <stdlib.h>
int main() {
  char *a;
  a = malloc(6*sizeof(char));

  a[0] = 'h';
  a[1] = 'e';
  a[2] = 'l';
  a[3] = 'l';
  a[4] = 'o';
  a[5] = '\0';

  char *b;
  b = malloc(8*sizeof(char));

  b[0] = 'g';
  b[1] = 'o';
  b[2] = 'o';
  b[3] = 'd';
  b[4] = 'b';
  b[5] = 'y';
  b[6] = 'e';
  b[7] = '\0';
  
  printf("%s\n",b);

  for (int i = 0; i <= 5; i++ )
  {
      b[i]=a[i];
  }
  printf("%s",b );
      
}