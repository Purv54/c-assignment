#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student arr[3];  
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", &arr[i].name);  

        printf("Enter roll number: ");
        scanf("%d", &arr[i].roll);

        printf("Enter marks: ");
        scanf("%f", &arr[i].marks);

        printf("\n");
    }

    printf("\n--- Student Details ---\n");
    for(i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", arr[i].name);
        printf("Roll Number: %d\n", arr[i].roll);
        printf("Marks: %.2f\n\n", arr[i].marks);
    }

    return 0;
}
