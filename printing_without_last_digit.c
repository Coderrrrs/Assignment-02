#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    num /= 10;
    printf("Your number withour the last digit: %d",num);
    _getch();
    return 0;
}