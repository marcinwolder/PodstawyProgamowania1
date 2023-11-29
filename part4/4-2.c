#include <stdio.h>

#define OCENIAJ 1 // Przed wyslaniem programu do oceny nalezy wartosc tej stalej zmienic na 1 
#define SIZE   10  // rozmiar tablicy

void moveArrRight(int* arr, int len, int move);
void moveArrLeft(int* arr, int len, int move);

int main(void) {
    int tab[SIZE] = {10,11,12,13,14,15,16,17,18,19};
    int move;
    if(OCENIAJ == 0) printf("Wpisz wielkosc przesuniecia w prawo: ");
    scanf("%d",&move);
    moveArrRight(tab, SIZE, move);
    if(OCENIAJ == 0) printf("Wpisz wielkosc przesuniecia w lewo: ");
    scanf("%d",&move);
    moveArrLeft(tab, SIZE, move);
    
    for(int i = 0; i < SIZE; i++){
        printf("%d ", tab[i]);
    }
    
    return 0;
}

void moveArrRight(int* arr, int len, int move){
    for(int i = len-1; i >=0; i--){
        int val = i - move >= 0 ? arr[i - move] : -2;
        arr[i] = val;
    }
}
void moveArrLeft(int* arr, int len, int move){
    for(int i = 0; i < len; i++){
        int val = i + move < len ? arr[i + move] : -1;
        arr[i] = val;
    }
}