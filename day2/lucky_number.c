#include<stdio.h>

int main()
{
    int inputNumber = 0;
    int sum = 0;
    int sumOfDigits = 0;
    puts("Enter a number to get your lucky number: ");
    scanf("%d", &inputNumber);

    printf("our lucky number for %d is ", inputNumber);

    while(inputNumber > 0)
    {
        int remainderDigit = inputNumber % 10;
        sumOfDigits = sumOfDigits + remainderDigit;
        inputNumber /= 10;
        if(inputNumber == 0 && sumOfDigits > 9)
        {
            inputNumber = sumOfDigits;
            sumOfDigits = 0;
        }
    }

    printf("%d", sumOfDigits);
}