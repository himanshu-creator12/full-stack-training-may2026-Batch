
#include <stdio.h>

int main()
{
   int lastTwoDigits;

    printf("Enter mobile number: ");                                                                                                                                                           
    scanf("%d" ,&lastTwoDigits);
    
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