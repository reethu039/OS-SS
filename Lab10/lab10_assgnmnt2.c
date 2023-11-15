#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s num1 num2 num3 ...\n", argv[0]);
        exit(0);
    }

    int result = 1;
    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        result *= num;
    }

    printf("Product of arguments: %d\n", result);

}

