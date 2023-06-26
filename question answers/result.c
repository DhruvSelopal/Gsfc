// Percentage
#include <stdio.h>

int main() {
    char name[100];
    float percentage , total = 0;
    int rollNumber;
    printf("Name : ");
    scanf("%s",&name);
    printf("roll number: ");
    scanf("%d",&rollNumber);
    for(int i = 0 ; i < 5;i++){
        float x;
        scanf("%f",&x);
        total+= x;
    }
    printf("Total = %f \n",total);
    percentage = (total/250)*100;
    printf("Percentage = %f \n",percentage);
    if(percentage >= 90){
        printf("A \n");
    }
    else if( percentage >= 80){
        printf("B \n");
    }
    else if(percentage >= 70){
        printf("C \n");
    }
    else{
        printf("Ikhlas \n");
    }
}