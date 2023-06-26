// add positive and negative 
#include <stdio.h>

int main() {
    int arr[10];
    int pos = 0,neg = 0;
    for(int i = 0; i < 10;i++){
        int x;
        scanf("%d",&x);
        arr[i] = x;
    }
    for(int i = 0; i < 10;i++){
        if(arr[i] < 0){
            neg = neg + arr[i];
        }
        else{
            pos = pos + arr[i];
        }
    }
    printf("Positive sum : %d \n",pos);
    printf("Negative sum : %d",neg);
}