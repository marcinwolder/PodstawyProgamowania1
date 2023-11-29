#include <stdio.h>

enum State {
    Code,
    InlineComment,
    BlockComment,
    FirstS,
    FirstA
};

int main(void){
    enum State state = Code;
    FILE *file = fopen("program.txt", "r");
    char buf;
    char mem;
    while(buf = getc(file)){
        if(buf != EOF){
            switch(state){
                case Code:
                    if(buf == '/'){
                        mem = '/';
                        state = FirstS;
                    }
                    else printf("%c", buf);
                    break;
                case InlineComment:
                    if(buf == '\n'){
                        state = Code;
                        printf("\n");
                    }
                    break;
                case BlockComment:
                    if(buf == '*'){
                        state = FirstA;
                    }
                    break;
                case FirstA:
                    if(buf == '/'){
                        state = Code;
                    }
                    break;
                case FirstS:
                    if(buf == '/'){
                        state = InlineComment;
                    }
                    else if(buf == '*'){
                        state = BlockComment;
                    }
                    else {
                        printf("%c%c", mem, buf);
                        state = Code;
                    };
                    break;
            }
        }
        else break;
    }
    fclose(file);
    return 0;
}