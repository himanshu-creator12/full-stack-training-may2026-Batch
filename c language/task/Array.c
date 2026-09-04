#include <stdio.h>

struct Subject {
    char name[20];
    int marks;
};

int main() {
    struct Subject subjects[] = {
        {"Maths", 85},
        {"Chemistry", 90},
        {"English", 78},
        {"Physics", 88},
        {"Computer", 95}
    };

    int n = sizeof(subjects) / sizeof(subjects[0]);
    int total = 0;

    printf("Subject Marks:\n");

    for (int i = 0; i < n; i++) {
        printf("%s : %d\n", subjects[i].name, subjects[i].marks);
        total += subjects[i].marks;
    }

    printf("\nTotal Marks = %d\n", total);

    return 0;
}