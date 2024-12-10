#include<stdio.h>
int main(){
    int inputChar;
    printf("Enter a character:\n");
    scanf("%d",&inputChar);
    if(inputChar>=65 && inputChar<90){
        printf("the given number is upper");
    }
    else{
        printf("the given number is lower");
    }
    return 0;
}