#include <stdio.h>
#include <stdlib.h>

#define OCENIAJ 1  // Przed wyslaniem programu do oceny nalezy wartosc tej stalej zmienic na 1 

int main(void) {
    int seed, n;
    if(OCENIAJ == 0) printf("Wpisz wartosc zarodka: ");
    scanf("%d",&seed);
    if(OCENIAJ == 0) printf("Wpisz liczbe generowanych liczb pseudolosowych: ");
    scanf("%d",&n);
    
    int arr[n];
    srand(seed);
    for(int i = 0; i < n; i++){
        arr[i] = rand();
    }
    for(int i = n-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}