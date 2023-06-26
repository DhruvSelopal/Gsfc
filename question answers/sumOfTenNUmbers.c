// sum of 10 ele
#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    for(int i = 0; i < 10;i++){
        int x;
        scanf("%d",&x);
        sum += x;
    }
    printf("Sum : %d",sum);
    
}