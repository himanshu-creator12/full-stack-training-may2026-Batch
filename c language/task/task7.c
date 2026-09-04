#include <stdio.h>
int main()
{
    char studentname[50];
    int studentage;
    float studentmarks;
    char studentgrade;

    printf("student name:");
    scanf("%s",&studentname );

    printf("student age:");
    scanf("%d",&studentage);

    printf("student marks:");
    scanf("%f",&studentmarks);

    printf("student grade:");
    scanf ("%c",&studentgrade);

    printf("\n---Students details---\n");
    printf ("Name:%s\n",studentname);
    printf("Age:%d\n",studentage);
    printf("Marks:%.2f\n",studentmarks);
    printf("Grade:%c\n",studentgrade);

    return 0;

}