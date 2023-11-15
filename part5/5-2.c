#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define MAX_WORD_LEN 428 //długość najdłuższego słowa na świecie w transkrypcji na alfabet łaciński.

char* read_string();
void print_string(char *strings[], int stringsCount);
void bubbleSort(char *strings[], int stringsCount);

int main(void){
    int n;
    scanf("%d", &n);
    char *strings[n];
//    DLA WERSJI ROZSZERZONEJ A
//    for (int i = 0; i < n; ++i) {
//        strings[i] = read_string();
//    }

//  DLA WERSJI ROZSZERZONEJ B
    for (int i = 0; i < n; ++i) {
        char *buf = read_string();
        int index = 0;
        for (int j = 0; j < i-1; ++j) {
            if(strcmp(strings[j+1], buf)>0){
                index = j;
                break;
            }
        }
        for (int j = i; j > index; --j) {
            strings[j]= strings[j-1];
        }
        strings[index]=buf;
    }

//    DLA WERSJI ROZSZERZONEJ A
//    bubbleSort(strings, n);
    print_string(strings, n);

    for (int i = 0; i < n; ++i) {
        free(strings[i]);
    }
    return  0;
}

char* read_string(){
    char buf[MAX_WORD_LEN];
    scanf("%s", &buf);
    char *inputText = malloc(strlen(buf)+1); //strlen zwraca dł. stringa bez znaku \0.
    strcpy(inputText, buf);
    return inputText;
}

void print_string(char *strings[], int stringsCount){
    for (int i = 0; i < stringsCount; ++i) {
        printf("%s\n", strings[i]);
    }
}

void bubbleSort(char *strings[], int stringsCount){
    char *buf;
    for (int i = 0; i < stringsCount; ++i) {
        for (int j = i+1; j < stringsCount; ++j) {
            if(strcmp(strings[i], strings[j])>0){
                buf = strings[i];
                strings[i] = strings[j];
                strings[j] = buf;
            }
        }
    }
}