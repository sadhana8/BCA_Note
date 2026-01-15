<<<<<<< HEAD
#include <stdio.h>

//int main() {
//    // Simple rectangle
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 10; j++) {
//            if (i == 0 || i == 4 || j == 0 || j == 9) {
//                printf("*");
//            } else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    // Generate some data (e.g., sine wave)
//    for (double x = 0; x <= 2 * M_PI; x += 0.1) {
//        double y = sin(x);
//        printf("%lf %lf\n", x, y);
//    }
//
//    return 0;
//}
#include <stdio.h>

int main() {
    int data[] = {10, 25, 15, 30};
    int n = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < n; i++) {
        printf("%d: ", i + 1);
        for (int j = 0; j < data[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

//int main() {
//    // Simple rectangle
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 10; j++) {
//            if (i == 0 || i == 4 || j == 0 || j == 9) {
//                printf("*");
//            } else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    // Generate some data (e.g., sine wave)
//    for (double x = 0; x <= 2 * M_PI; x += 0.1) {
//        double y = sin(x);
//        printf("%lf %lf\n", x, y);
//    }
//
//    return 0;
//}
#include <stdio.h>

int main() {
    int data[] = {10, 25, 15, 30};
    int n = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < n; i++) {
        printf("%d: ", i + 1);
        for (int j = 0; j < data[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
>>>>>>> 18eab0e4d506445091916fd87bb0bbb624841542
