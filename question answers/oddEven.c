// odd even 10 array ele
#include <stdio.h>

int main() {
    int arr[10],odd =0,even=0;
    for(int i = 0; i < 10;i++){
        int x;
        scanf("%d",&x);
        arr[i] = x;
    }
    for(int i = 0; i < 10;i++){
        if(arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Odd : %d \n",odd);
    printf("Even : %d",even);
}