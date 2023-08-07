#include <stdio.h>
#include <stdlib.h>

int findAvg(int numParams, char * argv[]);

int main(int argc, char *argv[])
{
    printf("Find the sum of numbers entered by the user!!!\n");

    if(argc < 2){
        printf("Error: Insufficient parameters!!!\n");
        printf("Give at least one or more valid integer numbers as parameters.\n");
        return -1;
    }

    int numParams = argc -1;
    int avg = 0;


    for(int i = 0; i < argc; i++){
        printf(" argv[%d] = %s\n", i, argv[i]);
    }

    avg = findAvg(numParams, argv);

    printf("The average of numbers given is: %d\n", avg);

    return 0;
}

int findAvg(int numParams, char * argv[]){

   char *pParam;
   int avg = 0;
   int sum = 0;
   int num;

   pParam = argv[1];

    for(int i = 1; i <= numParams; i++ ){
        pParam = argv[i];  // Copy the pointer to the first parameter passed
        num = atoi(pParam);
        sum += num;
        printf("pParam = %s, sum = %d\n", pParam, sum);
    }
    printf("numParams = %d\n", numParams);
    avg = sum/numParams;
    return avg;
}
