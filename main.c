#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long factorialRecursive(long long number);

long long factorialIteration(long long number);

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("\nYou need to provide 2 arguments!");
        printf("\nFirst for calculation method! (0 for recursive or 1 for iteration)");
        printf("\nSecond for number you want to calculate factorial for");
        return -1;
    }
    char *programName = argv[0];
    int calculationType = atoi(argv[1]);
    long long number = strtoll(argv[2], NULL, strlen(argv[2]));

    long long result;
    if (calculationType == 0) {
        result = factorialRecursive(number);
    } else if (calculationType == 1) {
        result = factorialIteration(number);
    } else {
        printf("Provided calculation id does not exist!");
        return 0;
    }
    printf("\nProgram name %s", programName);
    printf("\nCalculation type id %d", calculationType);
    printf("\nInput %lld", number);
    printf("\n Result %lld",result);

    return 0;
}


long long factorialRecursive(long long n) {
    long long result;

    if (n == 1)
        result = 1;
    else result = n * factorialRecursive(n - 1);

    return result;
}

long long factorialIteration(long long n) {
    long long result = 1;
    for (long long  i = n; i >= 1; i--) {
        result = result * i;
    }
    return result;
}
