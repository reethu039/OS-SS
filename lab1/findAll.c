#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findSum(int numParams, char * argv[]);
int findMin(int numParams, char * argv[]);
int findMax(int numParams, char * argv[]);
int findAvg(int numParams, char * argv[]);

int main(int argc, char *argv[])
{
    printf("Find the sum of numbers entered by the user!!!\n");

    if(argc < 3){
        printf("Error: Insufficient parameters!!!\n");
        printf("Give at least one or more valid integer numbers as parameters.\n");
        return -1;
    }

    int numParams = argc - 2;
    int sum = 0;


    for(int i = 0; i < argc; i++){
        printf(" argv[%d] = %s\n", i, argv[i]);
    }


    if(!strcmp(argv[1], 'SUM')) {
        sum = findSum(numParams, argv);
    } 
    else if(*argv[1] == 'MIN') {
        sum = findSum(numParams, argv);
    }
    else if(*argv[1] == 'MAX') {
        sum = findSum(numParams, argv);
    }
    else if(*argv[1] == 'AVG') {
        sum = findSum(numParams, argv);
    }

    printf("The sum of numbers given is: %d\n", sum);

    return 0;
}

int findSum(int numParams, char * argv[]){

    char *pParam;
    int sum = 0;
    int num;

    pParam = argv[2];

   for(int i = 1; i <= numParams; i++ ){
        pParam = argv[i];  // Copy the pointer to the first parameter passed
        num = atoi(pParam);
        sum += num;
        printf("pParam = %s, sum = %d\n", pParam, sum);
   }
    return sum;
}

int findMin(int numParams, char * argv[]){

   char *pParam;
   int min = 0;
   int num;

   pParam = argv[1];

    for(int i = 1; i <= numParams; i++ ){
        pParam = argv[i];  // Copy the pointer to the first parameter passed
        num = atoi(pParam);
        if (i == 1) {
            min = num;
        }
        else {
            if(min > num) {
                min = num;
            }
        }
        printf("pParam = %s, min = %d\n", pParam, min);
   }
    return min;
}

int findMax(int numParams, char * argv[]){

   char *pParam;
   int max = 0;
   int num;

   pParam = argv[1];

    for(int i = 1; i <= numParams; i++ ){
        pParam = argv[i];  // Copy the pointer to the first parameter passed
        num = atoi(pParam);
        if (i == 1) {
            max = num;
        }
        else {
            if(max < num) {
                max = num;
            }
        }
        printf("pParam = %s, max = %d\n", pParam, max);
   }
    return max;
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
