#include <stdio.h>

int main(void) {
    double arr[10];
    double arrInv[10];
    double start, stop;
    double vectorVal = 0;

    scanf("%lf %lf", &start, &stop);

    double r = (stop - start) / 9;

    for (int i = 9; i >= 0; i--) {
        arr[i] = stop - (9-i)*r;
        arrInv[i] = start + (9-i)*r;

        vectorVal += arr[i]*arrInv[i];
    }

    printf("%.4lf", vectorVal);

    return 0;
}