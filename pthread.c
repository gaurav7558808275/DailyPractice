#include "stdio.h"
#include "pthread.h"


/* gcc -g -pthread -{filename} -o {executable_name}*/
//   .\{name}.out - for executtion
void * threadSample(void * a)
{
    printf("Thread sample \n");
}

int main(void)
{
    pthread_t pid;
    pthread_create(&pid, NULL, &threadSample, NULL);
    pthread_join(pid,NULL);

    printf("Its working");
    return 0;
}