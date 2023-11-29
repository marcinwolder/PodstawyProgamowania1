#include <stdio.h>
#include <string.h>

#define KOD_MIN 'A'
#define KOD_MAX 'z'

void count(int c, int arr[]){
    if(c >= KOD_MIN && c <= KOD_MAX){
        int index = c - KOD_MIN;
        arr[index]++;
    }
}

void findMostCommon(int arr[]){
    int max = 0, it = 0;
    char str[(KOD_MAX-KOD_MIN+1)*2] = "";
    for (int i = 0; i < KOD_MAX-KOD_MIN+1; i++) { // TYLKO 1 PĘTLA
        if(arr[i]>max){
            max = arr[i];
            it = 0;
        }
        if(arr[i]==max){
            str[it++] = (char)(i + KOD_MIN);
            str[it++] = ' ';
        }
    }
    char ans[it-1];
    printf("%d %s", max, strncpy(ans, str, it));
}

int main(void){
    int buf, index;
    int arr[KOD_MAX-KOD_MIN+1] = {};
    do {
        buf = getc(stdin);
        count(buf, arr);
    } while (buf != EOF);
    findMostCommon(arr);
    return 0;
}