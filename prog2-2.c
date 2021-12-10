#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  FILE *fptr;
  char str[1000];
  int n = 0;
  system("ps | tail -n +2  > /tmp/proclist");
  // printf("hello\n"); fflush(stdout);
  fptr = fopen("/tmp/proclist","r");
  // printf("hello\n"); fflush(stdout);
  while (fscanf(fptr,"%s",str)!=EOF)
  {

      if(strstr(str, "bash") == NULL && atoi(str) > 0 && atoi(str) != system("echo &&") &&  atoi(str) != 7480)
      {
        char cmd[1000] = "kill -9 ";
        strcat( cmd, str);
        printf(" killing %s ",str);
        system(cmd);
      }
  }


}