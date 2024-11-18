#include <stdio.h>

// Function prototype
int recursiveFunctionName(int parameter);

int main() {
    int number = 5; // Example input
    int result = recursiveFunction(number);
    printf("Result: %d\n", result);
    return 0;
}

// Recursive function definition
int recursiveFunctionName(int parameter) {
    if (parameter <= 0) {
        return 0; // Base case
    } else {
        return parameter + recursiveFunctionName(parameter - 1); // Recursive case
    }
}