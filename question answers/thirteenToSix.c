// Valid or not password
#include <stdio.h>

int main() {
    char name[100];
    int size;
    scanf("%s",&name);
    size = strlen(name);
    if(size >= 6 && size <= 13){
        printf("Jod \n");
    }
    else{
        printf("Lode ho kya");
    }
}