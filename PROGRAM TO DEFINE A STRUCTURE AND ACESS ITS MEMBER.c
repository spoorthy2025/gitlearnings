#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    float gpa;
    char name[50];
};

int main() {
    struct Student s1;


    s1.id = 101;
    s1.gpa = 3.85;
    strcpy(s1.name, "Alice Smith");


    printf("Student Information:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("GPA: %.2f\n", s1.gpa);

    return 0;
}

