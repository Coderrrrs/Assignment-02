#include<stdio.h>
#include<conio.h>
int main(){
    int num1,num2;
    printf("Please enter the first number : ");
    scanf("%d",&num1);
    printf("Please enter the second number : ");
    scanf("%d",&num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\n after the swap the result is :- ");
    printf("\nthe first number is: %d\nthe second number is: %d",num1,num2);
    _getch();
    return 0;
}