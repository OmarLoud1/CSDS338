#include <stdio.h>
#include <stdlib.h>
int main() {

  int **a;
  a = malloc(sizeof( int));
  *a = malloc(sizeof(int));

  **a = 12;
  printf("%d\n", **a);



}