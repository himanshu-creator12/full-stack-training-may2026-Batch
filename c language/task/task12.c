#include<stdio.h>
int main()

{

    int num;
    printf("enter marks between 10-200 : ");
    scanf("%d&",&num);

    if (num>=10 && num<=200)
    {
        printf("your percentage : %d",num);
    }
    else
    {
        printf("invalid number");
    }
        return 0;

}







