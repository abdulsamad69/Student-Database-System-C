#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    FILE *fptr;

    fptr = fopen("students.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter Student Name: ");
    scanf("%s", s.name);
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fprintf(fptr, "Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
    
    fclose(fptr);
    printf("\nRecord saved successfully \n");

    return 0;
}
