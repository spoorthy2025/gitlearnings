#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int roll_no;
    char name[50];
    float marks;
} Student;


int compare_students_by_marks(const void *a, const void *b) {

    const Student *student_a = (const Student *)a;
    const Student *student_b = (const Student *)b;


    if (student_a->marks < student_b->marks) return 1;
    if (student_a->marks > student_b->marks) return -1;
    return 0;
}
void print_student(const Student *s) {
    printf("Roll No: %d, Name: %s, Marks: %.2f\n", s->roll_no, s->name, s->marks);
}

int main() {

    Student students[] = {
        {101, "Alice", 85.5},
        {102, "Bob", 92.0},
        {103, "Charlie", 78.5},
        {104, "David", 92.0},
        {105, "Eve", 81.0}
    };

    int n = sizeof(students) / sizeof(students[0]);

    printf("--- Student Details Before Sorting ---\n");
    for (int i = 0; i < n; i++) {
        print_student(&students[i]);
    }

    qsort(students, n, sizeof(Student), compare_students_by_marks);

    printf("\n--- Student Details After Sorting by Marks (Descending) ---\n");
    for (int i = 0; i < n; i++) {
        print_student(&students[i]);
    }

    return 0;
}
