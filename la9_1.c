#include <stdio.h>

struct student {
    int roll_number;
    char name[50];
    char gender;
    int marks[5];
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];

    // Taking input for each student
    for (int i = 0; i < n; i++) {
        printf("Enter information for student %d:\n", i+1);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Gender: ");
        scanf("%c", &students[i].gender);
        printf("Marks in 5 subjects: ");
        for (int j = 0; j < 5; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }

    // Displaying data for each student with total marks
    printf("\nStudent data:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d\n", i+1);
        printf("Roll number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Gender: %c\n", students[i].gender);
        int total_marks = 0;
        for (int j = 0; j < 5; j++) {
            total_marks += students[i].marks[j];
        }
        printf("Total marks: %d\n", total_marks);
    }

    // Displaying list of students who failed in a particular subject
    printf("\nList of students who failed in a particular subject:\n");
    for (int j = 0; j < 5; j++) {
        printf("\nSubject %d:\n", j+1);
        for (int i = 0; i < n; i++) {
            if (students[i].marks[j] < 40) {
                printf("%s (Roll Number: %d)\n", students[i].name, students[i].roll_number);
            }
        }
    }

    return 0;
}
