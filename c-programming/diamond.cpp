<<<<<<< HEAD
#include <stdio.h>
int main() {
    int rows, i, j;
    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    // Print the upper half of the diamond
    for (i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print the stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Print the lower half of the diamond
    for (i = rows - 1; i >= 1; i--) {
        // Print spaces before the stars
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print the stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>
int main() {
    int rows, i, j;
    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    // Print the upper half of the diamond
    for (i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print the stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Print the lower half of the diamond
    for (i = rows - 1; i >= 1; i--) {
        // Print spaces before the stars
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print the stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
>>>>>>> 18eab0e4d506445091916fd87bb0bbb624841542
