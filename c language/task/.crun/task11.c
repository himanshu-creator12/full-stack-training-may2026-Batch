

 #include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;

    // Input marks
    printf("Enter marks for Subject 1: ");
    scanf("%f", &m1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &m2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &m3);

    printf("Enter marks for Subject 4: ");
    scanf("%f", &m4);

    printf("Enter marks for Subject 5: ");
    scanf("%f", &m5);

    // Calculate total
    total = m1 + m2 + m3 + m4 + m5;

    // Calculate percentage
    percentage = (total / 500) * 100;

    // Display results
    printf("\nTotal Marks = %.2f", total);
    printf("\nPercentage = %.2f%%", percentage);

    return 0;
}   
