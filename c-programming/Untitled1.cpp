<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

#define MAX 100  // Maximum number of students

// Defining a structure for a student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

// Function to add a new student
void addStudent(struct Student students[], int *count) {
    if (*count >= MAX) {
        printf("No more students can be added!\n");
        return;
    }

    struct Student newStudent;
    printf("Enter Roll No: ");
    scanf("%d", &newStudent.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]%*c", newStudent.name);  // To accept string with spaces
    printf("Enter Marks: ");
    scanf("%f", &newStudent.marks);

    students[*count] = newStudent;
    (*count)++;
    printf("Student added successfully!\n\n");
}

// Function to display all students
void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No students to display!\n\n");
        return;
    }

    printf("List of Students:\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

// Function to search for a student by roll number
void searchStudent(struct Student students[], int count) {
    int roll;
    printf("Enter Roll No to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("Student Found:\n");
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n\n", students[i].marks);
            return;
        }
    }

    printf("Student with Roll No %d not found!\n\n", roll);
}

int main() {
    struct Student students[MAX];
    int count = 0;
    int choice;

    do {
        printf("Student Management System\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n\n");
        }
    } while (choice != 4);

    return 0;
}

=======
#include <stdio.h>
#include <string.h>

#define MAX 100  // Maximum number of students

// Defining a structure for a student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

// Function to add a new student
void addStudent(struct Student students[], int *count) {
    if (*count >= MAX) {
        printf("No more students can be added!\n");
        return;
    }

    struct Student newStudent;
    printf("Enter Roll No: ");
    scanf("%d", &newStudent.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]%*c", newStudent.name);  // To accept string with spaces
    printf("Enter Marks: ");
    scanf("%f", &newStudent.marks);

    students[*count] = newStudent;
    (*count)++;
    printf("Student added successfully!\n\n");
}

// Function to display all students
void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No students to display!\n\n");
        return;
    }

    printf("List of Students:\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

// Function to search for a student by roll number
void searchStudent(struct Student students[], int count) {
    int roll;
    printf("Enter Roll No to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("Student Found:\n");
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n\n", students[i].marks);
            return;
        }
    }

    printf("Student with Roll No %d not found!\n\n", roll);
}

int main() {
    struct Student students[MAX];
    int count = 0;
    int choice;

    do {
        printf("Student Management System\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n\n");
        }
    } while (choice != 4);

    return 0;
}

>>>>>>> 18eab0e4d506445091916fd87bb0bbb624841542
