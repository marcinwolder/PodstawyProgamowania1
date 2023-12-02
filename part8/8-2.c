#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LEN 428 //długość najdłuższego słowa na świecie w transkrypcji na alfabet łaciński.

struct Record {
    int n;
    char *strPtr;
};

char* read_string();
void print_string(struct Record *strings, int stringsCount);
int strCompare(const void *p1, const void *p2);
int compare(const void *p1, const void *p2);

int main(void){
    int n;
    int strCount = 0;
    scanf("%d", &n);

    struct Record strings[n];
    struct Record *stringsPtrs[n];
    for (int i = 0; i < n; ++i) {
        //WPISYWANIE WYRAZÓW
        char *str = read_string();
        
        struct Record **foundItem = NULL;
        
        if(strCount>0){
            // ZNALEZIENIE TAKIEGO W TABLICY
            struct Record key = {.strPtr = str};
            struct Record *keyPtr = &key;
            foundItem = bsearch(&keyPtr, stringsPtrs, strCount, sizeof(struct Record*), strCompare);
        }
        
        if(foundItem==NULL){
            // UTWORZENIE NOWEGO Z 1
            (strings+strCount)->strPtr = str;
            (strings+strCount)->n=1;
            
            *(stringsPtrs+strCount)=(strings+strCount);
            
            strCount++;
        } else {
            // DODANIE 1 DO N
            (*foundItem)->n++;
            free(str);
        }
        
        if(strCount>1){
            qsort(strings, strCount, sizeof(struct Record), compare);
            qsort(stringsPtrs, strCount, sizeof(struct Record*), strCompare);
        }
    }
    
    print_string(strings, strCount);
    return  0;
}

char* read_string(){
    char buf[MAX_WORD_LEN];
    scanf("%s", &buf);
    char *inputText = malloc(strlen(buf)+1); //strlen zwraca dł. stringa bez znaku \0.
    strcpy(inputText, buf);
    return inputText;
}

void print_string(struct Record *strings, int stringsCount){
    for (int i = 0; i < stringsCount; ++i) {
        printf("%s ", strings[i].strPtr);
    }
}

int strCompare(const void *p1, const void *p2){
    struct Record * const *recPtr1 = p1;
    struct Record * const *recPtr2 = p2;
    
    return strcmp((*recPtr1)->strPtr, (*recPtr2)->strPtr);
}
int compare(const void *p1, const void *p2){
    struct Record const *recPtr1 = p1;
    struct Record const *recPtr2 = p2;
    
    int delta =  (recPtr2->n) - (recPtr1->n);
    
    return delta == 0 ? strcmp(recPtr1->strPtr, recPtr2->strPtr) : delta;
}