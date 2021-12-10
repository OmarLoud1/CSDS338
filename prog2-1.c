#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
//concepts source: https://www.geeksforgeeks.org/program-round-robin-scheduling-set-1/
struct job
{
    int pid;
    int prio;
    int burst;
    int delay;
    int wait;
};

int priorities[256];
struct job high[100];
struct job medium [100];
struct job low[100];
int highn = 0;
int mediumn = 0;
int lown = 0;

int pid;

int findtimeafter(struct job *procs, int procnum, int proctime)
{
    int remainingburst[procnum];
    for (int i = 0; i < procnum; i++)  remainingburst[i] = procs[i].burst;


    int time = 0;

    for(int i = 0; i < procnum; i++)
    {
        int done = 1;

         for (int i = 0; i < procnum; i++)
         {
             int prio = i + 35 ;
             if(remainingburst[i] > 0)
             {
                 done = 0;
                 if(remainingburst[i] > proctime)
                 {
                     time = time + proctime;
                     remainingburst[i] = remainingburst[i] - proctime;
                     printf("job %d has %d time units left until done with prio %d\n", procs[i].pid, remainingburst[i], prio  );
                     printf("the time is : %d \n" , time);

                 }
             } else
             {
                 time = time + proctime;
                 procs[i].wait = time - procs[i].burst ;
                 remainingburst[i] = 0;




             }
        }
        if(done == 1)
        {
            break;
        }
    }
    return time;
}

void addjob(int prio, int burst, int delay, int wait){
    struct job job1 = {pid++ ,prio, burst, delay, wait};
    if(prio >= 0 && prio <= 99)
    {
        high[prio] = job1 ;
        highn ++;
    }

    if(prio >= 100 && prio <= 199)
    {
        medium[prio] = job1 ;
        mediumn++;
    }
    if(prio >= 199 && prio <= 256)
    {
        low[prio] = job1 ;
        lown++;
    }
    priorities[prio] = 1;
}


int main()
{
    srand(314159); // seed the random generator
    int i;
    for (i=1; i<=100; i++)
    {
        addjob(rand()%256, 1+rand()%100, 1+rand()%10,1+rand()%10 );
    }

    for (int i = 0; i < 256; i++ )

    //finishes the high priority first and then  goes on to medium and then low giving
    {
            if(i >= 0 && i <= 99)
            {
                findtimeafter(high, highn, 5); //high gets a higher (5) quantum per process
            }

            if(i >= 100 && i <= 199)
            {
                findtimeafter(medium, mediumn, 2);
            }
            if(i >= 199 && i <= 256)
            {
                findtimeafter(low, lown, 1);
            }


    }

}
