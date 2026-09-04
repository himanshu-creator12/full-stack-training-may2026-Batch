#include<stdio.h>

int main()

{
int num;

  printf("enter marks between 100-300 : ");
  scanf("%d&",&num);

 if (num>=100 && num<=300)
    {
        printf("your percentage : %d",num);
    }
    else
    {
        printf("invalid number");
    }
        return 0;

}

