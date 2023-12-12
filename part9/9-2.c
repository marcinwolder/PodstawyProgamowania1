#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    void* data;
    size_t elSize;
    size_t size;
    size_t capacity;
} Vector;

Vector* init_vector(size_t size, size_t elSize){
    Vector* v = (Vector*)malloc(sizeof(Vector));
    void* data = (void*)malloc(size*elSize);
    v->data = data;
    v->elSize = elSize;
    v->size = 0;
    v->capacity = size;
    return v;
}

void reserve(Vector *v, size_t newSize){
    if(newSize > v->capacity){
        v->data = (void*)realloc(v->data, newSize*v->elSize);
        v->capacity = newSize;
    }
}

void shrink_to_fit(Vector* v){
    v->data = (void*)realloc(v->data, (size_t)(v->size*v->elSize));
    v->capacity = v->size;
}

void resize(Vector* v, size_t size){
    if(size < v->size) v->size = size;
    else if(size > v->size){
        if(size > v->capacity) reserve(v, size);
        size_t newSize = size - v->size;
        memset((char*)(v->data) + v->size * v->elSize, 0, newSize * v->elSize);
        v->size = size;
    }
}

void dump_data(Vector* v, void(*elPrint)(const void*)){
    for(int i = 0; i < v->size; i++){
        (*elPrint)( ((char*)v->data)+i*v->elSize );
    }
    printf("\n");
}

void push_back(Vector* v, const void* val){
    if(v->size == v->capacity) reserve(v, (v->capacity)*2);
    memcpy( ((char*)(v->data) + v->size * v->elSize), val, v->elSize);
    v->size++;
}

void push_front(Vector* v, const void* val){
    if(v->size == v->capacity) reserve(v, (v->capacity)*2);
    memmove( (char*)(v->data)+v->elSize, (char*)(v->data), v->size*v->elSize );
    memcpy( (char*)(v->data), val, v->elSize );
    v->size++;
}

void insert(Vector* v, const size_t index, const void* val){
    if(v->size == v->capacity) reserve(v, (v->capacity)*2);
    memmove( (char*)(v->data)+(index+1)*v->elSize, (char*)(v->data)+index*v->elSize, v->size*v->elSize );
    memcpy( (char*)(v->data)+index*v->elSize, val, v->elSize );
    v->size++;
}

void erase(Vector* v, const size_t index){
    if(index+1==v->size){
        char* elementAddr = (char*)(v->data)+index*v->elSize;
        free(elementAddr);
        memset( elementAddr, 0, v->elSize );
    }
    else {
        char* elementAddr = (char*)(v->data)+index*v->elSize;
        memmove(elementAddr, elementAddr+v->elSize, (v->size-index-1)*v->elSize);
    }
    v->size--;
}

void erase_value(Vector* v, const void* val, int(*cmp)(const void*, const void*)){
    for(int i = 0; i < v->size; i++){
        if(!(*cmp)(val, (char*)(v->data)+i*v->elSize)){
            erase(v, i);
        }
    }
}

void clear(Vector* v){
    memset( (char*)(v->data), 0, v->elSize * v->size );
}

void printDouble(const void* el){
    printf("%.2lf ", *(double*)el);
}
int cmpDouble(const void* el1, const void* el2){
    return *(double*)el1 - *(double*)el2;
}

int main(void){
    // zdefiniowany wektor V1, w którym zapisywane są liczby typu double, początkowa pojemność wystarcza na zapisania 5 liczb,
    Vector *v = init_vector(5, sizeof(double));
    
    // wywoływane są funkcje (w podanej kolejności), 
    // - 2 razy push_front() z danymi 1. i 2.,
    double a = 1.;
    double b = 2.;
    push_front(v, &a);
    push_front(v, &b);
    
    // - 4 razy push_back() z danymi 10., 2., 14., 16.,
    double c = 10.;
    double d = 14.;
    double e = 16.;
    push_back(v, &c);
    push_back(v, &b);
    push_back(v, &d);
    push_back(v, &e);
    // - 1 raz push_front() z daną 100.,
    double f = 100.;
    push_front(v, &f);
    
    // - jeżeli zostały zdefiniowane funkcje 8-11, to należy je także wywołać,
    insert(v, 2, &f);
    erase(v, 4);
    erase_value(v, &f, cmpDouble);
    shrink_to_fit(v);
    
    // - dump_data().
    dump_data(v, printDouble);
    return 0;
}