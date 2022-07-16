#include <stdio.h>
#include <conio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        count++;
        if ((num & 1) == 1)
        {
            printf("%d", count);
            _getch();
            break;
        }
        num >>= 1;
    }
    return 0;
}