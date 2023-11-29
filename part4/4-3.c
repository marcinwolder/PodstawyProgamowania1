#include <stdio.h>
#include <stdlib.h>

float average(int* arr, int size);
void print_int_table_1D(int* arr, int size);
void seperate(int* tab, int size, float value, int t_small[], int* small_size, int t_big[], int* big_size);

int main(void) {
    int seed, max, size;
    scanf("%d %d %d",&seed,&max,&size);
    srand(seed);
    int tab[size];
    
    for(int i = 0; i < size; i++){
        int a = rand()%(max+1);
        int b = rand()%(max+1);
        tab[i] = a*b;
    }
    
    float avg = average(tab, size);
    printf("%.2f \n", avg);
    
    int t_small[size], t_big[size];
    int small_size, big_size;
    seperate(tab, size, avg, t_small, &small_size, t_big, &big_size);
    
    print_int_table_1D(t_small, small_size);
    
    avg = average(t_small, small_size);
    printf("%.2f \n", avg);
    
    print_int_table_1D(t_big, big_size);
    
    avg = average(t_big, big_size);
    printf("%.2f \n", avg);
    
    return 0;
}

float average(int* arr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return (float)sum / (float)size;
}
void print_int_table_1D(int* arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void seperate(int* tab, int size, float value, int t_small[], int* small_size, int t_big[], int* big_size){
    int k,l = 0;
    for(int i = 0; i < size; i++){
        if(tab[i] < value){
            t_small[k] = tab[i];
            k++;
        }
        else {
            t_big[l] = tab[i];
            l++;
        }
    }
    *small_size = k;
    *big_size = l;
}