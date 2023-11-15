#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define MAX_WORD_LEN 428 //długość najdłuższego słowa na świecie w transkrypcji na alfabet łaciński.

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

int main(void){
    int n;
    scanf("%d", &n);
    char *strings[n];
    for (int i = 0; i < n; ++i) {
        strings[i] = read_string();
    }

    bubbleSort(strings, n);
    print_string(strings, n);

    for (int i = 0; i < n; ++i) {
        free(strings[i]);
    }
    return  0;
}
