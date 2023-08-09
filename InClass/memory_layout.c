#include <stdio.h>

int fun() {
    static int count = 0;
    count++;
    return count;
}

int main() {
    printf("%d\n",fun());
    printf("%d\n",fun());
    return 0;
}

// run gcc -o file file.c
// run ./filename 
// run size filename