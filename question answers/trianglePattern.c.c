// Patterns
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("Pattern 1: \n");
    for(int i = 1; i <= n;i++){
        for(int q = 1;q <= i;q++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < n;i++){
        for(int q = 0;q < n - i;q++){
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern 2: \n");
    for(int i = 1; i <= n;i++){
        for(int q = 1;q <= i;q++){
            printf("%d",i);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 5; i > 0;i--){
        for(int q = 0;q < i;q++){
            printf("%d",i);
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 3: \n");
    for(int i = 1; i <= n;i++){
        for(int q = 1;q <= i;q++){
            printf("%d",q);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 5; i > 0;i--){
        for(int q = 1;q <= i;q++){
            printf("%d",q);
        }
        printf("\n");
    }
}