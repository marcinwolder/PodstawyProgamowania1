#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x);
double simpson(double min, double max, double delta, double S, int lvl, int maxLvl);
double initSimpson(double min, double max, double delta, int maxLvl);

int main(void) {
    double min, max, delta;
    int maxLvl;
    scanf("%lf", &min);
    scanf("%lf", &max);
    scanf("%lf", &delta);
    scanf("%d", &maxLvl);

    printf("%.3lf", initSimpson(min, max, delta, maxLvl));
}

double initSimpson(double min, double max, double delta, int maxLvl){
    double S = (max - min) * (f(min) + 4 * f((min+max)/2) + f(max)) / 6;
    return simpson(min, max, delta, S, 1, maxLvl);
}
double f(double x){
    return 1/((x-0.5)*(x-0.5)+0.01);
}
double simpson(double min, double max, double delta, double S, int lvl, int maxLvl){
    if (lvl >= maxLvl) return NAN;
    double mid = (min+max)/2;

    double S1 = (max - mid) * (f(mid) + 4 * f((mid+max)/2) + f(max)) / 6;
    double S2 = (mid - min) * (f(min) + 4 * f((mid+min)/2) + f(mid)) / 6;

    if(fabs((S1+S2) - S) <= delta) {
        return S1 + S2;
    }

    double simson1 = simpson(mid, max, delta/2, S1, lvl+1, maxLvl);
    double simson2 = simpson(min, mid, delta/2, S2, lvl+1, maxLvl);

    if(simson1 != NAN && simson2 != NAN) return simson1+simson2;
    else return NAN;
}