// user deifned function all type
#include <stdio.h>
#include<string.h>
#include<ctype.h>
int sum(int a, int b){
    return a + b;
}
int sum2(int a,int b){
    printf("Sum2 output  : %d \n",a+b);
}
int sum3(){
    int a,b;
    printf("Sum3 input : ");
    scanf("%d",&a);
    printf("Sum3 input : ");
    scanf("%d",&b);
    return a+b;
}
int sum4(){
    int a,b;
    printf("Sum 4: ");
    scanf("%d",&a);
    printf("Sum 4: ");
    scanf("%d",&b);
    printf("Sum4 output : %d \n",a+b);
}
int main() {
    int n,m,p,q,add,add3;
    printf("Sum input: ");
    scanf("%d",&n);
    printf("Sum input: ");
    scanf("%d",&m);
    printf("Sum2 input: ");
    scanf("%d",&p);
    printf("Sum2 input: ");
    scanf("%d",&q);
    sum4();
    add3 = sum3();
    add = sum(n,m);
    printf("sum output: %d \n",add);
    sum2(p,q);
    printf("sum3 output : %d \n",add3);
}