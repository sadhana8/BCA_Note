<<<<<<< HEAD
#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;
    for (int i = 3; i <= n; ++i) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}
=======
#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;
    for (int i = 3; i <= n; ++i) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}
>>>>>>> 18eab0e4d506445091916fd87bb0bbb624841542
