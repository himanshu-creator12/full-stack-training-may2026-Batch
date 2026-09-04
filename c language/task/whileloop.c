#include <stdio.h>

int main()

{

    int number_1;

    int number_2;

    int option;

    while (1)

    {

        

        printf("\n###################*******My Calculator**********#################\n");

        printf("1 addition:  ");

        printf("\n2 subtraction: ");

        printf("\n3 multiplication: ");

        printf("\n4. Exit");

        printf("\nPlease select any option: ");

        scanf("%d", &option);

        if (option == 2)

        {

            printf("Please enter first number: ");
            scanf("%d", &number_1);

            printf("Please enter second number: ");
             scanf("%d", &number_2);

            printf("\nSUM: %d", number_1 + number_2);

        }

        else if(option==5)

        {

                break;

        }

    }

    return 0;

}