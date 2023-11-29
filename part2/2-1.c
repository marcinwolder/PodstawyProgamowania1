#include <stdio.h>

int main(void) {
    double a0, postep;
    int n;

    scanf("%lf %lf %d", &a0, &postep, &n);

    for (int i = 0; i < n; ++i) {
        printf("%.3lf ", a0);
        a0 += postep;
    }

    return 0;
}