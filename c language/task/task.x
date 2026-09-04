#include <stdio.h>

int main()
{
    int lastTwoDigits;

    printf("Enter mobile number: ");
    scanf("%lld", &mobile);

    lastTwoDigits = mobile % 100;  // Extract last two digits

    printf("Last two digits: %d\n", lastTwoDigits);

    if (lastTwoDigits % 2 == 0)
    {
        printf("The last two-digit number is Even\n");
    }
    else
    {
        printf("The last two-digit number is Odd\n");
    }

    return 0;
}