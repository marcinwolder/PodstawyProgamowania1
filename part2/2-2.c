#include <stdio.h>

int main(void) {
    double arr[10];
    double start, stop;

    scanf("%lf %lf", &start, &stop);

    double r = (stop - start) / 9;

    for (int i = 9; i >= 0; i--) {
        arr[i] = stop - (9-i)*r;
        printf("%.3lf ", arr[i]);
    }

    return 0;
}