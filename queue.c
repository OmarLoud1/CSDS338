#include <stdio.h>
#include <stdlib.h>

 //array to store which priority is in the queue
int priorities [256];

// -100  to -69
int high1 [100];
//-68 to -37
int high2 [100];
// -36 to -4
int medium1 [100];
// -3 to 27
int medium2 [100];
// 28 to 60
int low1[100];
//61 to 93
int low2 [100];
//94 to 126
int verlow1[100];
//127 to 156
int verylow2[100];

//counts how full an array is
int high_1, high_2, medium_1, medium_2, low_1, low_2, verylow_1, verylow_2 = 0;

//the range of priorities in this program will be assumed to go from -100 to 156
int insertByPriority(int pid, int priority);

int runTaskByPrio(int priority);

int hash(int priority)
{
        return priority %100 ;
    
}

void main() {
  srand(314159); // seed the random generator
  int i;
  for (i=1; i<=30; i++)
  {
      int priority1 = rand() % 256 - 100;
      int runqueue[i] = priority1;
      insertByPriority(rand(), priority);
  }
  for (int i = 0; i < 100; i++ )
  {
    if (high1[i] != null) printf(i, high1[i]);
    if (high2[i] != null) printf(i, high2[i]);
    if (medium1[i] != null) printf(i, medium1[i]);
    if (medium2[i] != null) printf(i, medium2[i]);
    if (low1[i] != null) printf(i, low1[i]);
  }

  for (int i = 0; i < 256; i++)
  {
      if(priorities[i] != NULL)   runTaskByPrio(priorities[i]);
     
  }

      
}

int insertByPriority(int pid, int priority)
{
    priorities[priority+100] += 1;

    int position = hash(priority);

    //if priority is negative then the process belongs to the high priority
    if (priority <= -69 && priority >= -100 )
    {
        if (high1[position] == NULL){
            high1[position] = pid;
            high_1 =+ 1;
        }else if (high1[position+32] == NULL){
            high1[position +32] = pid;
            high_1 =+ 1;
        }
    }

     if (priority <= -37 && priority >= -68 )
    {
        if (high2[position] == NULL){
            high2[position] = pid;
            high_2 =+ 1;
        }else if (high2[position+32] == NULL){
            high2[position +32] = pid;
            high_2 =+ 1;
        }
    }

     if (priority <= -4 && priority >= -36 )
    {
        if (medium1[position] == NULL){
            medium1[position] = pid;
            medium_1 =+ 1; 
        }else if (medium[position+32] == NULL){
            medium1[position +32] = pid;
            medium_1 =+ 1; 
        }
    }

     if (priority <= 27 && priority >= -3 )
    {
        if (medium2[position] == NULL){
            medium2[position] = pid;
            medium_2 =+ 1; 
        }else if (medium2[position+32] == NULL){
            medium2[position +32] = pid;
            medium_2 =+ 1; 
        }
    }
     if (priority <= 60 && priority >= 28 )
    {
        if (low1[position] == NULL){
            low1[position] = pid;
            low_1 =+ 1; 
        }else if (low1[position+32] == NULL){
            low1[position +32] = pid;
            low_1 =+ 1; 
        }
    }
    if (priority <= 93 && priority >= 61 )
    {
        if (low2[position] == NULL){
            low2[position] = pid;
            low_2 =+ 1; 
        }else if (low2[position+32] == NULL){
            low2[position +32] = pid;
            low_2 =+ 1; 
        }
    }
    if (priority <= 126 && priority >= 94 )
    {
        if (verylow1[position] == NULL){
            verylow1[position] = pid;
            verylow_1 =+ 1; 
        }else if (verylow1[position+32] == NULL){
            verylow1[position +32] = pid;
            verylow_1 =+ 1; 
        }
    }
    if (priority <= 156 && priority >= 127 )
    {
        if (verylow2[position] == NULL){
            verylow2[position] = pid;
             verylow_2 =+ 1; 
        }else if (verylow2[position+32] == NULL){
            verylow2[position +32] = pid;
             verylow_2 =+ 1; 
        }
    }
}

int runTaskByPrio(int priority)
{
    if(priorities[priority] == NULL)
    {
        printf("there is no task")
        return 0;
    }
    else
    {
            if (priority <= -69 && priority >= -100 && high1 > 0 )
        {
            if (high1[position] != NULL){
                high1[position] = NULL;
                high_1 =- 1;
                 printf("task run");
                return 1;
            }else if (high1[position+32] != NULL){
                high1[position +32] = NULL;
                high_1 =- 1;
                 printf("task run");
                return 1;
            }else{
                printf("task not found")
                return 0;
            }
        }

        if (priority <= -37 && priority >= -68 && high2 > )
        {
            if (high2[position] != NULL){
                high2[position] = NULL;
                high_2 =- 1;
                 printf("task run");
                return 1;
            }else if (high2[position+32] != NULL){
                high2[position +32] = NULL;
                high_2 =- 1;
                 printf("task run");
                return 1;
            }else{
                printf("task not found")
                return 0;
            }
        }

        if (priority <= -4 && priority >= -36 )
        {
            if (medium1[position] != NULL){
                medium1[position] = NULL;
                medium_1 =- 1; 
                 printf("task run");
                return 1;
            }else if (medium[position+32] != NULL){
                medium1[position +32] = NULL;
                medium_1 =- 1; 
                 printf("task run");
                return 1;
            }else{
                printf("task not found")
                return 0;
            }
        }

        if (priority <= 27 && priority >= -3 )
        {
            if (medium2[position] != NULL){
                medium2[position] = NULL;
                medium_2 =- 1; 
                 printf("task run");
                return 1;
            }else if (medium2[position+32] != NULL){
                medium_2[position +32] = NULL;
                 printf("task run");
                return 1;
            }else{
                printf("task not found")
                return 0;
            }
        }
        if (priority <= 60 && priority >= 28 )
        {
            if (low1[position] != NULL){
                low1[position] = NULL;
                low_1 =- 1; 
                 printf("task run");
                return 1;
            }else if (low1[position+32] != NULL){
                low1[position +32] = NULL;
                low_1 =- 1; 
                 printf("task run");
                return 1;
            }else{
                printf("task not found")
                return 0;
            }
        }
        if (priority <= 93 && priority >= 61 )
        {
            if (low2[position] != NULL){
                low2[position] = NULL;
                low_2 =- 1; 
                 printf("task run");
                return 1;
            }else if (low2[position+32] != NULL){
                low2[position +32] = NULL;
                low_2 =- 1; 
                 printf("task run");
                return 1;
            }else{
                printf("task not found")
                return 0;
            }
        }
        if (priority <= 126 && priority >= 94 )
        {
            if (verylow1[position] != NULL){
                verylow1[position] = NULL;
                verylow_1 =- 1; 
                 printf("task run");
                return 1;
            }else if (verylow1[position+32] != NULL){
                verylow1[position +32] = NULL;
                verylow_1 =- 1; 
                 printf("task run");
                return 1;
            }else{
                printf("task not found")
                return 0;
            }
        }
        if (priority <= 156 && priority >= 127 )
        {
            if (verylow2[position] != NULL){
                verylow2[position] = NULL;
                verylow_2 =- 1; 
                 printf("task run");
                return 1;
            }else if (verylow2[position+32] != NULL){
                verylow2[position +32] = NULL;
                verylow_2 =- 1;
                 printf("task run");
                return 1; 
            }else{
                printf("task not found")
                return 0;
            }
        }

    }
}
