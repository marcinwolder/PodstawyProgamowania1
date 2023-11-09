#include <stdio.h>
#include <math.h>

double f(double x);
double simpson(double min, double max, double delta, double S, int lvl);
double initSimpson(double min, double max, double delta);

int main(void) {
    double min, max, delta;
    printf("Podaj zakres dolny: \n");
    scanf("%lf", &min);
    printf("Podaj zakres gorny: \n");
    scanf("%lf", &max);
    printf("Podaj maksymalny dopuszczalny blad: \n");
    scanf("%lf", &delta);

    printf("Przyblizona wartosc to: %lf", initSimpson(min, max, delta));
}

double initSimpson(double min, double max, double delta){
    double S = (max - min) * (f(min) + 4 * f((min+max)/2) + f(max)) / 6;
    return simpson(min, max, delta, S, 1);
}
double f(double x){
    return 1/((x-0.5)*(x-0.5)+0.01);
}
double simpson(double min, double max, double delta, double S, int lvl){
    if (lvl >= 100) return NAN;
    double mid = (min+max)/2;

    double S1 = (max - mid) * (f(mid) + 4 * f((mid+max)/2) + f(max)) / 6;
    double S2 = (mid - min) * (f(min) + 4 * f((mid+min)/2) + f(mid)) / 6;

    if((S1+S2) - S <= delta) return S1+S2;

    double simson1 = simpson(mid, max, delta/2, S1, lvl+1);
    double simson2 = simpson(min, mid, delta/2, S2, lvl+1);

    if(simson1 != NAN && simson2 != NAN) return simson1+simson2;
    else return NAN;
}