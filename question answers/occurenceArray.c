// Occurence
#include <stdio.h>

int main() {
    int arr[10];
    int digit,count = 0;
    for(int i = 0; i < 10;i++){
        int x;
        scanf("%d",&x);
        arr[i] = x;
    }
    scanf("%d",&digit);
    for(int i = 0; i < 10;i++){
        if(arr[i] == digit){
            count++;
        }
    }
    printf("Occurence : %d",count);
}