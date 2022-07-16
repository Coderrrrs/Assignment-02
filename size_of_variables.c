#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;

    printf("Size of an int is : %d bytes\nSize of a float is : %d bytes\nSize of a char is : %d byte\nSize of a double is : %d bytes", sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    _getch();
    return 0;
}