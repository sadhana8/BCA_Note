<<<<<<< HEAD
#include <stdio.h>
#include <conio.h>

int arm(int num) {
    int r, sum = 0;

    while (num != 0) {
        r = num % 10;
        sum += r * r * r;
        num /= 10;
    }

    return sum;
}

int main() {
    int i;

    for (i = 0; i <= 1000; i++) {
        if (arm(i) == i) {
            printf("%d\t", i);
        }
    }

    return 0;
}
=======
#include <stdio.h>
#include <conio.h>

int arm(int num) {
    int r, sum = 0;

    while (num != 0) {
        r = num % 10;
        sum += r * r * r;
        num /= 10;
    }

    return sum;
}

int main() {
    int i;

    for (i = 0; i <= 1000; i++) {
        if (arm(i) == i) {
            printf("%d\t", i);
        }
    }

    return 0;
}
>>>>>>> 18eab0e4d506445091916fd87bb0bbb624841542
