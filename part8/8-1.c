#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LEN 428 //długość najdłuższego słowa na świecie w transkrypcji na alfabet łaciński.

char** read_strings(int n);
void print_string(char *strings[], int stringsCount);
int compare(const void *str1, const void *str2);

int main(void){
    int n;
    scanf("%d", &n);

    char **strings = read_strings(n);

    qsort(strings, n, 8, compare);
    
    print_string(strings, n);

    for (int i = 0; i < n; ++i) {
        free(strings[i]);
    }
    return  0;
}

char** read_strings(int n){
    char **strings = malloc(n*sizeof(char**));
    for (int i = 0; i < n; ++i) {
        char buf[MAX_WORD_LEN];
        scanf("%s", &buf);
        char *inputText = malloc(strlen(buf)+1);
        strcpy(inputText, buf);
        *(strings+i) = inputText;
    }
    
    return strings;
}

void print_string(char *strings[], int stringsCount){
    for (int i = 0; i < stringsCount; ++i) {
        printf("%s ", strings[i]);
    }
}

int compare(const void *str1, const void *str2){
    char *const *pp1 = str1;
    char *const *pp2 = str2;
    return strcmp(*pp1, *pp2);
}