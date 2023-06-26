// Copying string
#include <stdio.h>
#include<string.h>

int main() {
    char word[100],word2[100];
    scanf("%s",&word);
    strcpy(word2,word);
    printf("Second string : %s",word2);

    return 0;
}