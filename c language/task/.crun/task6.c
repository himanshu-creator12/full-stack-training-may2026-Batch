#include <stdio.h>

int main()
{
    int num1, num2, product;

    printf("Enter first number1: ");
    scanf("%d", &num1);

    printf("Enter second number2: ");
    scanf("%d", &num2);

    product = num1 * num2;

    printf("%d", product);

    return 0;
}