// Comparing string
#include <stdio.h>
#include<string.h>

int main() {
    char word[] = "there";
    char word2[] = "their";
    int x;
    x = strcmp(word,word2);
    printf("%d",x);

    return 0;
}