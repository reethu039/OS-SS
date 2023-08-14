#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char * env_var;

// Function that prints the environment variable contents 
// Implement the below function in the lab
void print_env_val(char * env_var, char * envp[]);

int main(int argc, char * argv[], char * envp[])
{

   env_var = "USER";
   printf("Lab2: Printing the content of the env var %s\n", env_var);
   print_env_val(env_var, envp);

   env_var = "OLDPWD";
   printf("Lab2: Printing the content of the env var %s\n", env_var);
   print_env_val(env_var, envp);
  
    return 0;
}

// It should print the value stored in the environment variable in envp[]
void print_env_val(char * env_var, char * envp[]){
// Write your code here ...

} // end of print_env_val()
