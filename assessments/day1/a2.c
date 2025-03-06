//Program to accept average marks of the student and print result as follows. Also check for invalid score, 0 to 49 - Fail, 50 to 70 - Second class, 71 to 90 - Frist class, 91 to 100 - Distinction.
#include <stdio.h>

int main() 
{
    float averageMarks;

    // Accepting input from the user
    printf("Enter the average marks of the student (0 to 100): ");
    scanf("%f", &averageMarks);

    // Check for invalid score
    if (averageMarks < 0 || averageMarks > 100) 
    {
        printf("Invalid score! Please enter a score between 0 and 100.\n");
    } else {
        // Determine result based on average marks
        if (averageMarks >= 0 && averageMarks <= 49) 
        {
            printf("Result: Fail\n");
        } else if (averageMarks >= 50 && averageMarks <= 70) 
        {
            printf("Result: Second Class\n");
        } else if (averageMarks >= 71 && averageMarks <= 90) 
        {
            printf("Result: First Class\n");
        } else if (averageMarks >= 91 && averageMarks <= 100) 
        {
            printf("Result: Distinction\n");
        }
    }

    return 0;
}