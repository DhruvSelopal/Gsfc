#include <stdio.h>

int main() {
    char word;
    scanf("%c",&word);
    if(isalpha(word)){
        printf("Is alphabet");
    }
    else{
        printf("Is not");
    }

    return 0;
}