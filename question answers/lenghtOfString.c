// size of string
#include <stdio.h>

int main() {
    char name[100];
    int size;
    scanf("%s",&name);
    size = strlen(name);
    printf("%d",size);
}