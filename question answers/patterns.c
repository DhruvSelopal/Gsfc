// Patterns
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("Loop 1 : ");
    for(int i = 1; i <= n;i++){
        printf("%d ",i);
    }
    printf("\n");
    printf("Loop 2 : ");
    for(int i = 1; i <= n*2;i+=2 ){
        printf("%d ",i);
    }
    printf("\n");
    printf("Loop 3 : ");
    for(int i = 2; i < n*2 + 2;i+=2){
        printf("%d ",i);
    }
    printf("\n");
    printf("Loop 6 : ");
    for(char i = 'A'; i <= 'Z';i++){
        printf("%c ",i);
    }
    printf("\n");
    printf("Loop 5 : ");
    for(int i = 5; i <= 5*n;i+=5){
        printf("%i ",i);
    }
    printf("\n");
    printf("Loop 4 : ");
    for(int i = 1; i <= n;i++){
        printf("%i+",i);
    }
    printf("\n");
    

    return 0;
}