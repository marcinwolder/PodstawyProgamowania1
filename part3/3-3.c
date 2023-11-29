#include <stdio.h>
#include <stdlib.h>
/* Nalezy uzupelnic o header biblioteki zawierajacy definicja stalej INT_MAX */

#define OCENIAJ 0  // Przed wyslaniem programu do oceny nalezy wartosc tej stalej zmienic na 1 

int main(void) {
    int values[9] = {};
    int count[9] = {};
    int seed, n;
    if(OCENIAJ == 0) printf("Wpisz wartosc zarodka: ");
    scanf("%d",&seed);
    if(OCENIAJ == 0) printf("Wpisz liczbe generowanych liczb pseudolosowych: ");
    scanf("%d",&n);
    srand(seed);
    
    for (int i = 0; i < n; i++){
        int num = rand()%900+100;
        int index = (num/100)-1;
        values[index] += num;
        count[index] ++;
    }
    
    for (int i = 0; i < 9; i++){
        if (values[i]){
            printf("%.2f ", (float)values[i]/(float)count[i]);
        }
        else {
            printf("0 ");
        }
    }
    
    return 0;
}