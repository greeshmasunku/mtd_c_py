//Find second smallest digit in the given number
#include<stdio.h>

int main()
{
    int inputNumber, digit;
    int firstNumber = 0, secondNumber = 0;
    
}


#include <stdio.h>

int main() {
    long long number;
    printf("Enter a number: ");
    scanf("%lld", &number);

    // Initialize the smallest and second smallest digits
    int smallest = 10; // Since digits are from 0 to 9
    int second_smallest = 10;

    // Process each digit
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        number /= 10;            // Remove the last digit

        // Update smallest and second smallest
        if (digit < smallest) {
            second_smallest = smallest; // Update second smallest
            smallest = digit;            // Update smallest
        } else if (digit < second_smallest && digit != smallest) {
            second_smallest = digit;     // Update second smallest
        }
    }

    // Check if we found a second smallest digit
    if (second_smallest == 10) {
        printf("There is no second smallest digit.\n");
    } else {
        printf("The 2nd smallest digit is: %d\n", second_smallest);
    }

    return 0;
}]