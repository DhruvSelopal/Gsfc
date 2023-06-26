// Write a program to write a weekday and print the day
#include <stdio.h>

int main() {
    int digit;
    scanf("%d",&digit);
    if(digit == 1){
        printf("Monday \n");
    }
    else if(digit == 2){
        printf("Tuesday \n");
    }
    else if(digit == 3){
        printf("Wednesday \n");
    }
    else if(digit == 4){
        printf("Thursday \n");
    }
    else if(digit == 5){
        printf("Friday \n");
    }
    else if(digit == 6){
        printf("Saturday \n");
    }
    else if(digit == 7){
        printf("Sunday \n");
    }
    else{
        printf("Not a valid unput \n");
    }
    return 0;
}