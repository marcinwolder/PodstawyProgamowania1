#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int a,b;
    int buf;
    if(b<a){
        buf = a;
        a = b;
        b = buf;
    }
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", (rand()%(b-a+1))+a);

    return 0;
}