// occurence
#include <stdio.h>
#include<string.h>

int main() {
    char word[] = "thererrr";
    char r;
    int count = 0;
    scanf("%c",&r);
    for(int i = 0; i < strlen(word);i++){
        if(word[i] == r){
            count++;
        }
    }
    printf("Occurence : %d",count);
    
}