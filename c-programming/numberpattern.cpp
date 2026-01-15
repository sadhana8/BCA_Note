<<<<<<< HEAD
#include <stdio.h>

int main() {
    int i, j, spc, rows, k;

    printf("Input number of rows: ");
    scanf("%d", &rows);

    spc = rows + 4 - 1;

    for (i = 1; i <= rows; i++) {
        for (k = spc; k >= 1; k--) {
            printf(" ");
        }

        // Print the ascending sequence from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print the descending sequence from i-1 to 1
//        for (j = i - 1; j >= 1; j--) {
//            printf("%d ", j);
//        }

        printf("\n");
        spc--;
    }

    return 0;
}
=======
#include <stdio.h>

int main() {
    int i, j, spc, rows, k;

    printf("Input number of rows: ");
    scanf("%d", &rows);

    spc = rows + 4 - 1;

    for (i = 1; i <= rows; i++) {
        for (k = spc; k >= 1; k--) {
            printf(" ");
        }

        // Print the ascending sequence from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print the descending sequence from i-1 to 1
//        for (j = i - 1; j >= 1; j--) {
//            printf("%d ", j);
//        }

        printf("\n");
        spc--;
    }

    return 0;
}
>>>>>>> 18eab0e4d506445091916fd87bb0bbb624841542
