// chotte se bada badde se chotta
#include <stdio.h>

int main() {
    char word;
    scanf("%c",&word);
    if('a' <= word && word <= 'z'){
        printf("%c",word - 32);
    }
    else if('A' <= word && word <= 'Z'){
        printf("%c",word + 32);
    }
    else{
        printf("Invalid input");
    }
    
}