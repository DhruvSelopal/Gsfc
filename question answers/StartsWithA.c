// starts with A or not
#include <stdio.h>

int main() {
    char word[100];
    scanf("%s",&word);
    if(word[0] == 'A'){
        printf("Yes");
    }
    else{
        printf("No");
    }
}