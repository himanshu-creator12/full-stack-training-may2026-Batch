#include <stdio.h>
int main() 

{
    char password[20];
    int attempts = 0;

    do {
        printf("Enter password: ");
        scanf("%19s", password);

        if (strcmp(password, "admin123") == 0) {
            printf("Login successful!\n");
            break;
        } else {
            attempts++;
            printf("Wrong password! Attempts left: %d\n", 5 - attempts);
        }

    } while (attempts < 5);

    if (attempts == 5) {
        printf("Maximum attempts reached. Access denied.\n");
    }

    return 0;
}

