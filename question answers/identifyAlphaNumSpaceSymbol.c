// identity alpha num space and symbol
// 'A' <= word && word <= 'Z'
#include <stdio.h>
#include<ctype.h>

int main() {
    char word;
    scanf("%c",&word);
    if('A' <= word && word <= 'Z'){
        printf("Is capital alphabet \n");
    }
    else if('a' <= word && word <= 'z'){
        printf("Is small alphabet \n");
    }
    else if(isdigit(word)){
        printf("Is digit \n");
    }
    else if(isspace(word)){
        printf("Blank space baby and i write your name \n");
    }
    else{
        printf("Symbol \n");
    }
    
}