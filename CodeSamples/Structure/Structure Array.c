#include <stdio.h>
#include <string.h>
#define NUMSTUD 5

struct Student{
    char name[50];
    char snum[10];
    int age;
    double grade;
};

int main(void){

    struct Student profile[NUMSTUD];

    double totalGrade = 0.0f;
    int indexOldest = 0;

    //input
    printf("Enter the details of %d students: \n", NUMSTUD);

    for(int i=0; i < NUMSTUD; i++){
        printf("\n\nStudent %d \n", i+1);

        printf("Name: ");
        fgets(profile[i].name, sizeof(profile[i].name), stdin);
        profile[i].name[strcspn(profile[i].name, "\n")] = '\0';

        printf("Student Number (3 Digits): ");
        fgets(profile[i].snum, sizeof(profile[i].snum), stdin);
        profile[i].snum[strcspn(profile[i].snum, "\n")] = '\0';

        printf("Age: ");
        scanf("%d", &profile[i].age);

        printf("Grade: ");
        scanf("%lf", &profile[i].grade);

        //to avoid buffering
        int c;
        while ((c = getchar()) != '\n' && c != -1); 
    }

    //output
    printf("\n -- Information of all Students --\n");

    for(int i=0; i < NUMSTUD; i++){

        printf("Student %d: \n", i+1);
        printf("Name: %s\n", profile[i].name);
        printf("Student Number: %s\n", profile[i].snum);
        printf("Age: %d\n", profile[i].age);
        printf("Grade: %.2lf\n", profile[i].grade);

        if (profile[i].age > profile[indexOldest].age){
            indexOldest = i;
        }

        totalGrade += profile[i].grade;
    }

    printf("\nThe oldest student is:\n");
    printf("Name: %s\n", profile[indexOldest].name);
    printf("Student Number: %s\n", profile[indexOldest].snum);
    printf("Age: %d\n", profile[indexOldest].age);
    printf("Grade: %.2lf\n", profile[indexOldest].grade);

    double avgGrade = totalGrade / NUMSTUD;
    printf("\nThe average grade of all students is %.2lf", avgGrade);

    return 0;
}