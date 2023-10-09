#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

// Building the executable with the command: gcc -o threadEx4 -D_REENTRANT lab8_assign7_prob1.c -lpthread

void *thread_function(void *arg);

char message1[] = "1. Introduction to threads !!!";

static int procData = 100;

int main()
{

	int stat;
	pthread_t thread_id1;

	int localData = 0;

	printf("PID of the main process is %d\n", getpid());
	printf("Going to use pthread_create() POSIX call.\n");

    int arr[3] = {10,20,30};
	stat = pthread_create(&thread_id1, NULL, thread_function, (void *)&arr);

	if (stat != 0)
	{ // thread creation failure
		perror("Error: Thread 1 creation failed\n");
		exit(EXIT_FAILURE);
	}

	printf("Main: Thread 1 created successfully\n");
    sleep(10);
	while (1)
	{
		sleep(10);
		printf("Main: My PID %d\n", (int)getpid());
		printf("Main: My procData = %d and localData = %d\n", procData, localData);
		procData++;
		localData++;
	}
	exit(EXIT_SUCCESS);

} // end of main()

void *thread_function(void *arr)
{
    int localData = 1000;
    int avg, sum;
    for(int i=0; i<3; i++){
        sum = sum + arr[i];
    }
    avg = sum/3;
    printf("%d\n",sum);
    sleep(2);
    while (1)
    {
        sleep(5);
        printf("Thread: Average of array = %d\n", avg);
        printf("Thread: My procData = %d and localData = %d\n", procData, localData);
        procData++;
        localData++;
    }
}
