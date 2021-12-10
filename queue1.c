#include <stdio.h>
#include <stdlib.h>

struct task
{
    int pid;
    int prio;
    int burst;
    int arrivalDelay;
}

 //array to store which priority is in the queue
int priorities [256];

// -100  to -69
task high1 [100];
//-68 to -37
task high2 [100];
// -36 to -4
task medium1 [100];
// -3 to 27
task medium2 [100];
// 28 to 60
task low1[100];
//61 to 93
task low2 [100];
//94 to 126
task verlow1[100];
//127 to 156
task verylow2[100];

//counts how full an array is
int high1, high2, medium1, medium2, low1, low2, verylow1, verylow2 = 0;

//the range of priorities in this program will be assumed to go from -100 to 156
void insert(task );


int hash(int priority)
{
        return priority %100 ;
    
}

void main() {
  srand(314159); // seed the random generator
  int i;
  for (i=1; i<=10; i++) printf("prio=%d burst=%d arrivalDelay=%d\n", rand()%256, 1+rand()%100, 1+rand()%10);
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
            high1 =+ 1;
        }else if (high1[position+32] == NULL){
            high1[position +32] = pid;
            high1 =+ 1;
        }
    }

     if (priority <= -37 && priority >= -68 )
    {
        if (high2[position] == NULL){
            high2[position] = pid;
            high2 =+ 1;
        }else if (high2[position+32] == NULL){
            high2[position +32] = pid;
            high2 =+ 1;
        }
    }

     if (priority <= -4 && priority >= -36 )
    {
        if (medium1[position] == NULL){
            medium1[position] = pid;
            medium1 =+ 1; 
        }else if (medium[position+32] == NULL){
            medium1[position +32] = pid;
            medium1 =+ 1; 
        }
    }

     if (priority <= 27 && priority >= -3 )
    {
        if (medium2[position] == NULL){
            medium2[position] = pid;
            medium2 =+ 1; 
        }else if (medium2[position+32] == NULL){
            medium2[position +32] = pid;
            medium2 =+ 1; 
        }
    }
     if (priority <= 60 && priority >= 28 )
    {
        if (low1[position] == NULL){
            low1[position] = pid;
            low1 =+ 1; 
        }else if (low1[position+32] == NULL){
            low1[position +32] = pid;
            low1 =+ 1; 
        }
    }
    if (priority <= 93 && priority >= 61 )
    {
        if (low2[position] == NULL){
            low2[position] = pid;
            low2 =+ 1; 
        }else if (low2[position+32] == NULL){
            low2[position +32] = pid;
            low2 =+ 1; 
        }
    }
    if (priority <= 126 && priority >= 94 )
    {
        if (verylow1[position] == NULL){
            verylow1[position] = pid;
            verylow1 =+ 1; 
        }else if (verylow1[position+32] == NULL){
            verylow1[position +32] = pid;
            verylow1 =+ 1; 
        }
    }
    if (priority <= 156 && priority >= 127 )
    {
        if (verylow2[position] == NULL){
            verylow2[position] = pid;
             verylow2 =+ 1; 
        }else if (verylow2[position+32] == NULL){
            verylow2[position +32] = pid;
             verylow2 =+ 1; 
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
                high1 =- 1;
                 printf("task run");
                return 1;
            }else if (high1[position+32] != NULL){
                high1[position +32] = NULL;
                high1 =- 1;
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
                high2 =- 1;
                 printf("task run");
                return 1;
            }else if (high2[position+32] != NULL){
                high2[position +32] = NULL;
                high2 =- 1;
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
                medium1 =- 1; 
                 printf("task run");
                return 1;
            }else if (medium[position+32] != NULL){
                medium1[position +32] = NULL;
                medium1 =- 1; 
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
                medium2 =- 1; 
                 printf("task run");
                return 1;
            }else if (medium2[position+32] != NULL){
                medium2[position +32] = NULL;
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
                low1 =- 1; 
                 printf("task run");
                return 1;
            }else if (low1[position+32] != NULL){
                low1[position +32] = NULL;
                low1 =- 1; 
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
                low2 =- 1; 
                 printf("task run");
                return 1;
            }else if (low2[position+32] != NULL){
                low2[position +32] = NULL;
                low2 =- 1; 
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
                verylow1 =- 1; 
                 printf("task run");
                return 1;
            }else if (verylow1[position+32] != NULL){
                verylow1[position +32] = NULL;
                verylow1 =- 1; 
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
                verylow2 =- 1; 
                 printf("task run");
                return 1;
            }else if (verylow2[position+32] != NULL){
                verylow2[position +32] = NULL;
                verylow2 =- 1;
                 printf("task run");
                return 1; 
            }else{
                printf("task not found")
                return 0;
            }
        }

    }
}
