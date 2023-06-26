// swapping numbers
#include <stdio.h>

int main() {
    int a = 7;
    int b = 8;
    a = a+b;
    b = a - b;
    a = a - b;
    printf("b ki value %d",b);
    printf("a ki value %d",a);
}