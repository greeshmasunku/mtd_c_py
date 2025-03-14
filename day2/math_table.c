#include <stdio.h>

int main()
{
    int inputNum = 0;
    puts("Enter a number to print its Math table:");
    scanf("%d \n", &inputNum);

    for(int i = 1; i <= 10; i++)
    {
        printf("%d * %02d = %03d \n", inputNum, i, inputNum * i);
    }
}