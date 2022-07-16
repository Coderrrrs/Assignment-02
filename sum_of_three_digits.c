#include<stdio.h>
#include<conio.h>
int main(){
    int num,first,last_two_digit,middle,last,sum = 0;
    printf("Enter a three digit number : ");
    scanf("%d",&num);

    if(num != 0 && num <= 999){
    
        first = num/100;
        last_two_digit = num%100;
        middle = last_two_digit/10;
        last = last_two_digit % 10;

     sum = first + middle + last;

     printf("\nSum of these the digits is : %d",sum);
    }else{
        printf("Please enter a three digit number");
    }
     _getch();
    return 0;
}