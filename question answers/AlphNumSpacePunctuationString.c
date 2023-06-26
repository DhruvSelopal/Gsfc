// alphabet number space and punctutaion occurence
#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char word[100];
    int alpha = 0,digit = 0,punctuation = 0,space = 0;
    gets(word);
    for(int i = 0; i < strlen(word);i++){
        char r = word[i];
        if(isalpha(r)){
            alpha++;
        }
        else if(isdigit(r)){
            digit++;
        }
        else if(isspace(r)){
            space++;
        }
        else{
            punctuation++;
        }
    }
    printf("Alphabet : %d  Digit : %d  Space : %d   punctuation : %d",alpha,digit,space,punctuation);
    
}