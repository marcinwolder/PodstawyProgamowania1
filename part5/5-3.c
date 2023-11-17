#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 4             // liczba lancuchow
#define STR_LEN_MAX 100 // maksymalna dlugosc lancucha (liczona z '\0')

void read_string_2D(char strings[N][STR_LEN_MAX]);
void print_string(char strings[N][STR_LEN_MAX]);
void bubbleSort(char strings[N][STR_LEN_MAX]);

int main(void){
    char strings[N][STR_LEN_MAX]={};
    for (int i = 0; i < N; ++i) {
        read_string_2D(strings);
    }

    bubbleSort(strings);
    print_string(strings);

    return  0;
}

void read_string_2D(char strings[N][STR_LEN_MAX]){
    int index = 0;
    for (int i = 0; i < N; ++i) {
        if(!strlen(strings[i])){
            index = i;
            break;
        }
    }
    scanf("%s", &strings[index]);
}
void print_string(char strings[N][STR_LEN_MAX]){
    for (int i = 0; i < N; ++i) {
        printf("%s ", strings[i]);
    }
}
void bubbleSort(char strings[N][STR_LEN_MAX]){
    char lowStrings[N][STR_LEN_MAX];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= strlen(strings[i]); ++j) {
            lowStrings[i][j] = (char)tolower(strings[i][j]);
        }
    }
    char buf[STR_LEN_MAX];
    char lowBuf[STR_LEN_MAX];
    for (int i = 0; i < N; ++i) {
        for (int j = i+1; j < N; ++j) {
            if(strcmp(lowStrings[i], lowStrings[j])>0){
                strcpy(buf, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], buf);

                strcpy(lowBuf, lowStrings[i]);
                strcpy(lowStrings[i], lowStrings[j]);
                strcpy(lowStrings[j], lowBuf);
            }
        }
    }
}