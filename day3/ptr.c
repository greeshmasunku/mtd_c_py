#include<stdio.h>

int main()
{
    char c = 'A'; 
    int i = 10;
    char *pc = (char *)&i;
    int *pi = (int *)&c;
    printf("%u %u \n", pc, pi);
    printf("%u %u \n", &c, &i);
    printf("%u %u \n", pc + 1, pi + 1);
    printf("%c %d \n", c + 1, i + 1);
}