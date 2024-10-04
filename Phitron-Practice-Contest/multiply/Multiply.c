#include<stdio.h>

int main()
{
    // Declaring variables
    long long int firstNumber, secondNumber, resultOfMultiplication;

    // Taking input from user
    scanf("%lld %lld", &firstNumber, &secondNumber);

    // Multiplying two numbers
    resultOfMultiplication = firstNumber * secondNumber;

    // Printing the result
    printf("%lld\n", resultOfMultiplication);

    return 0;
}