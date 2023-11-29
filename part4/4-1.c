#include <stdio.h>
#include <stdlib.h>

#define OCENIAJ 1  // Przed wyslaniem programu do oceny nalezy wartosc tej stalej zmienic na 1 

void bubbleSort(int *arr, int len);

int main(void) {
    int n, seed, indx;
    if(OCENIAJ == 0) printf("Wpisz rozmiar tablicy: ");
    scanf("%d",&n);
    if(OCENIAJ == 0) printf("Wpisz wartosc zarodka: ");
    scanf("%d",&seed);
    if(OCENIAJ == 0) printf("Wpisz indeks wypiywanego elementu: ");
    scanf("%d",&indx);
    srand(seed);
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        arr[i] = rand();
    }
    
    bubbleSort(arr, n);
    
    // for(int i = 0; i < n; i++){
    //     printf("%d \n", arr[i]);
    // }
    
    printf("%d", arr[indx]);
    
    return 0;
}

void bubbleSort(int *arr, int len){
    int k = 0;
    for (int i = 0; i < len; i++){
        for (int j = i; j < len; j++){
            if (arr[i] < arr[j]){
                int buf = arr[i];
                arr[i] = arr[j];
                arr[j] = buf;
            }
        }
    }
}