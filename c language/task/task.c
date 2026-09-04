
#include <stdio.h>

int main()
{
    int a1, a2, a3, a4, a5;
    int total;
    float percentage;

    printf("Enter marks of Geography: ");
    scanf("%d", &a1);

    printf("Enter marks of Mathematics: ");
    scanf("%d", &a2);

    printf("Enter marks of Physics: ");
    scanf("%d", &a3);

    printf("Enter marks of Chemistry: ");
    scanf("%d", &a4);

    printf("Enter marks of Commerce: ");
    scanf("%d", &a5);

    total = a1 + a2 + a3 + a4 + a5;
    percentage = total / 5.0;

    printf("\n----- RESULT -----\n");
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 40)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    if (percentage >= 90)
        printf("Grade: A+\n");
    else if (percentage >= 80)
        printf("Grade: A\n");
    else if (percentage >= 70)
        printf("Grade: B\n");
    else if (percentage >= 60)
        printf("Grade: C\n");
    else if (percentage >= 50)
        printf("Grade: D\n");
    else if (percentage >= 40)
        printf("Grade: E\n");
    else
        printf("Grade: F\n");

    return 0;
}