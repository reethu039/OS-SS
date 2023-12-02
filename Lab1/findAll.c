#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef enum OP {
    MIN = 1,
    MAX,
    SUM, 
    AVG
}enumOp;

enumOp eOp;
int min = INT_MAX;
int max = 0;
int sum = 0;
float avg = 0.0;


int findSum(int numParams, char * argv[]);
int findMin(int numParams, char * argv[]);
int findMax(int numParams, char * argv[]);
float findAvg(int numParams, char * argv[]);

int main(int argc, char *argv[])
{

    if(argc < 3){
        printf("Error: Insufficient parameters!!!\n");
        printf("Give at least two or more valid integer numbers as parameters.\n");
        return -1;
    }

    int numParams = argc - 2;

    for(int i = 0; i < argc; i++){
        printf(" argv[%d] = %s\n", i, argv[i]);
    }

    char *pOp = argv[1];

    if(!strcmp(pOp, "SUM")) {
        sum = findSum(numParams, argv);
        printf("The sum of numbers given is: %d\n", sum);

    } 
    if(!strcmp(pOp, "MIN")) {
        min = findMin(numParams, argv);
        printf("The min of numbers given is: %d\n", min);
    }
    if(!strcmp(pOp, "MAX")) {
        max = findMax(numParams, argv);
        printf("The max of numbers given is: %d\n", max);
    }
    if(!strcmp(pOp, "AVG")) {
        avg = findAvg(numParams, argv);
        printf("The average of numbers given is: %f\n", avg);
    }

    return 0;
}

int findSum(int numParams, char * argv[]){

    char *pParam;
    int sum = 0;
    int num;

    pParam = argv[2];

   for(int i = 1; i <= numParams; i++ ){
        pParam = argv[i+1];  // Copy the pointer to the first parameter passed
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

   pParam = argv[2];

    for(int i = 1; i <= numParams; i++ ){
        pParam = argv[i+1];  // Copy the pointer to the first parameter passed
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

   pParam = argv[2];

    for(int i = 1; i <= numParams; i++ ){
        pParam = argv[i+1];  // Copy the pointer to the first parameter passed
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

float findAvg(int numParams, char * argv[]){

   char *pParam;
   float avg = 0;
   int sum = 0;
   int num;

   pParam = argv[2];

    for(int i = 1; i <= numParams; i++ ){
        pParam = argv[i+1];  // Copy the pointer to the first parameter passed
        num = atoi(pParam);
        sum += num;
        printf("pParam = %s, sum = %d\n", pParam, sum);
    }
    printf("numParams = %d\n", numParams);
    avg = sum/numParams;
    return avg;
}
