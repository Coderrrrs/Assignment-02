#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if((num & 1) == 1){
        printf("%d is odd",num);
    }else{
        printf("%d is even",num);
    }
    _getch();
    return 0;
}