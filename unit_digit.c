#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    num %= 10;
    printf("Unit digit of the given number is : %d",num);
    _getch();
    return 0;
}