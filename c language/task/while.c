#include <stdio.h>

int main()
{
    int number_1;
    int number_2;
    int option;

    while (1)
    {
        printf("\n###################*******My Calculator**********#################\n");

        printf("1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Exit");

        printf("\nPlease select any option: ");
        scanf("%d", &option);

        if (option == 1)
        {
            printf("Please enter first number: ");
            scanf("%d", &number_1);

            printf("Please enter second number: ");
            scanf("%d", &number_2);

            printf("\nSUM: %d\n", number_1 + number_2);
        }
        else if (option == 2)
        {
            printf("Please enter first number: ");
            scanf("%d", &number_1);

            printf("Please enter second number: ");
            scanf("%d", &number_2);

            printf("\nSUBTRACTION: %d\n", number_1 - number_2);
        }
        else if (option == 3)
        {
            printf("Please enter first number: ");
            scanf("%d", &number_1);

            printf("Please enter second number: ");
            scanf("%d", &number_2);

            printf("\nMULTIPLICATION: %d\n", number_1 * number_2);
        }
        else if (option == 4)
        {
            printf("Thank You!\n");
            break;
        }
        else
        {
            printf("\nInvalid option! Please try again.\n");
        }
    }

    return 0;
}