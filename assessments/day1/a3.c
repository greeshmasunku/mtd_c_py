//Check if a number is perfect square
#include <stdio.h>
#include <math.h>

int main() 
{
    int number;
    int squareRoot;

    // Accept input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for negative numbers
    if (number < 0) 
    {
        printf("%d is not a perfect square.\n", number);
        return 0;
    }

    // Calculate the square root
    squareRoot = sqrt(number);

    // Check if square of the integer part of the square root equals the original number
    if (squareRoot * squareRoot == number) 
    {
        printf("%d is a perfect square.\n", number);
    } else {
        printf("%d is not a perfect square.\n", number);
    }

    return 0;
}