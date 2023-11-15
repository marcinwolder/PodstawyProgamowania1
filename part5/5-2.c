#include <stdio.h>
#include <malloc.h>
#include <string.h>

char* read_string(){
    char buf[428]; //długość najdłuższego słowa na świecie w transkrypcji na alfabet łaciński.
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

int main(void){
    int n;
    scanf("%d", &n);
    char *strings[n];
    for (int i = 0; i < n; ++i) {
        strings[i] = read_string();
    }

    print_string(strings, n);

    for (int i = 0; i < n; ++i) {
        free(strings[i]);
    }
    return  0;
}
