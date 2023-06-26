// absolute value
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n < 0){
        printf("abs value = %d",(n *- 2) + n);
    }
    else{
        printf("abs value = %d",n);
    }
    
}