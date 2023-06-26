// Copying string
#include <stdio.h>
#include<string.h>

int main() {
    char word[] = " world";
    char word2[] = "ends";
    strcat(word2,word);
    printf("The value is : ");
    printf("%s",word2);

    return 0;
}