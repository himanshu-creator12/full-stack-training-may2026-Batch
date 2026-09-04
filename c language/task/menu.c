#include<stdio.h>

int main()

{
int menu;

printf("Select a menu:%n");
printf("1.Korean pizza\n");
printf("2.Veg burger\n");
printf("3.french fries\n");
printf("4.Chess pasta\n");
printf("5.Veg roll\n");

 printf("Enter your choice (1-5): ");
    scanf("%d", &menu);

switch (menu) {
    case 1:
    printf("you selected Korean pizza.\n");
    break;

    case 2:
    printf("you selected Veg burger.\n");
    break;

    case 3:
    printf("you selcted french fries.\n");
    break;

    case 4:
    printf("you selected Chess pasta.\n");
    break;
    
    case 5:
    printf("you slected Veg roll.\n");
    break;

    default:
            printf("Invalid choice! Please select between 1 and 5.\n");
}

     return 0;       
    



}