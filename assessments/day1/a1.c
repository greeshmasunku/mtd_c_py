//Program to accept a number from user and print its Math table

#include <stdio.h>

int main()
{
    int inputNum;

    // accept input from the user
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &inputNum);

    // To print the multiplication table
    printf("Multiplication Table for %d:\n", inputNum);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", inputNum, i, inputNum * i);
    }

    return 0;
}