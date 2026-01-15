<<<<<<< HEAD
//pascal's triangle in c 

#include <stdio.h>
int main() {
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int pascal[rows][rows];
    pascal[0][0] = 1;
    for (i = 1; i < rows; i++) {
        pascal[i][0] = 1; 
        pascal[i][i] = 1; 
        for (j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
    return 0;
}
=======
//pascal's triangle in c 

#include <stdio.h>
int main() {
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int pascal[rows][rows];
    pascal[0][0] = 1;
    for (i = 1; i < rows; i++) {
        pascal[i][0] = 1; 
        pascal[i][i] = 1; 
        for (j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
    return 0;
}
>>>>>>> 18eab0e4d506445091916fd87bb0bbb624841542
