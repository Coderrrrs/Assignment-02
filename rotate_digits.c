#include<stdio.h>
#include<conio.h>
int main(){
    int num,first,second,last,result;
    printf("Enter a Three digit number: ");
    scanf("%d",&num);
    first = num / 100;
    second = (num % 100) / 10;
    last = (num % 100) % 10;

    result = (last * 100 ) + second * 10 + first; 
    printf("after rotation the number is : %d",result);
    _getch();
    return 0;
}