#include<stdio.h>
#include<conio.h>
int main(){
    int num,ld;
    printf("Enter a number : ");
    scanf("%d",&num);
    ld = num / 10;
    ld*=10;
    printf("after converting the last digit as zero the result is : %d",ld);
    return 0;
    _getch();
    return 0;
}