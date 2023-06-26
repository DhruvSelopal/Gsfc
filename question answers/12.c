#include <stdio.h>

int main() {
    char word;
    scanf("%c",&word);
    if(isdigit(word)){
        printf("Is digit");
    }
    else{
        printf("Is not");
    }

    return 0;
}