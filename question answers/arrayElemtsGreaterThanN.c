// elements greater then digits
#include <stdio.h>

int main() {
    int arr[10];
    int digit;
    for(int i = 0; i < 10;i++){
        int x;
        scanf("%d",&x);
        arr[i] = x;
    }
    scanf("%d",&digit);
    for(int i = 0; i < 10;i++){
        if(arr[i] > digit){
            printf("%d  ",arr[i]);
        }
    }
}