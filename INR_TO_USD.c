#include<stdio.h>
#include<conio.h>
int main(){
    float input,dollar;
    printf("Enter the amount in INR : ");
    scanf("%f",&input);
    dollar = input / 76.23;
    printf("%.2f INR = %.2f USD",input,dollar);
    _getch();
    return 0;
    }