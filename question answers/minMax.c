// min and max
#include <stdio.h>

int main() {
    int arr[10];
    int min, max;
    for(int i = 0 ; i < 10;i++){
        int x;
        scanf("%d",&x);
        arr[i] = x;
    }
    min = arr[0];
    max = arr[0];
    for(int i = 0; i < 10;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Max = %d Min = %d",max,min);
}