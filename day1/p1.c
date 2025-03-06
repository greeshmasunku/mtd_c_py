#include<stdio.h>
int main()
{
    int inputNum = 0;
    puts("Enter a number to check it is Even");
    scanf("%d", &inputNum);
    if(inputNum % 2 == 0)
        printf("%d is Even", inputNum);
    else
        printf("%d is not Even", inputNum);
    return 0;
}
