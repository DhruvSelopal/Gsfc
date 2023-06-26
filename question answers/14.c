// afi full form
#include <stdio.h>

int main() {
    char word;
    scanf("%c",&word);
    if(word == 'a'){
        printf("Administration \n");
    }
    else if(word == 'f'){
        printf("Finance \n");
    }
    else if(word == 'i'){
        printf("Information technology \n");
    }
    else{
        printf("Invalid input \n");
    }
    return 0;
}