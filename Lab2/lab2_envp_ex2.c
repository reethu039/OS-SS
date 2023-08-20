#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <string.h>

char * env_var;

// Function that prints the environment variable contents 
// Implement the below function in the lab
void print_env_val(int numParams, char *argv[], char * envp[]);

int main(int argc, char * argv[], char * envp[])
{
    if(argc < 2){
        printf("Error: Insufficient parameters!!!\n");
        printf("Give at least one or more valid environment variables as parameters.\n");
        return -1;
    }

    int numParams = argc -1;

    for(int i = 0; i < argc; i++){
        printf(" argv[%d] = %s\n", i, argv[i]);
    }
    printf("\n");

    print_env_val(numParams, argv, envp);
    
    return 0;
}

// It should print the value stored in the environment variable in envp[]
void print_env_val(int numParams, char *argv[], char * envp[]){
    char *env_var;
    env_var = argv[1];

    for(int i = 0; envp[i] != NULL; i++) {
        if((strncmp(envp[i], env_var, 4)==0) && (envp[i][strlen(env_var)] == '=')) {
            printf("%s\n",envp[i]);
    }
   }
} // end of print_env_val()
